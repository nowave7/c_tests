#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>
#include <unistd.h>
#include <pthread.h>


#define PROG_BAR_LENGTH 30
#define NUMBER_OF_THREADS 2
#define ASCII_ESC "\033"
#define CSI "["
#define PREVIOUS_LINE "F"

typedef void* (*func)(void*);

#define false 0;
#define true 1;

typedef struct
{
    int progress_bar_width;
    int current_progress;
    func update_bar;
}progress_bar;

typedef struct
{
    pthread_t thread_handle;
    func thread_func;
    progress_bar *thread_bar;
}thread_info;

void *update_bar(void *args)
{
    progress_bar *bar = (progress_bar*)args;
    bar->current_progress++;
    int num_chars = (bar->current_progress * 100 / bar->progress_bar_width) * PROG_BAR_LENGTH / 100;
    printf("[");

    for(int i = 0; i<num_chars; i++)
    {
        printf("-");
    }

    for(int i = 0; i<PROG_BAR_LENGTH - num_chars; i++)
    {
        printf(" ");
    }

    printf("]\n");

    return NULL;
}

void *thread_func(void *arg)
{
    thread_info *thread = (thread_info*)arg;

    while (thread->thread_bar->current_progress < thread->thread_bar->progress_bar_width)
    {
        thread->thread_bar->update_bar(thread->thread_bar);
        usleep(1000);
    }
    return NULL;
}

int main()
{
    printf("starting bar threads example...\n");
    thread_info threads[NUMBER_OF_THREADS];
    progress_bar bars[NUMBER_OF_THREADS];

    for (int i=0; i<NUMBER_OF_THREADS; i++)
    {
        bars[i].progress_bar_width = rand() % 1000;
        bars[i].current_progress = 0;
        bars[i].update_bar = update_bar;
        threads[i].thread_func = thread_func;
        threads[i].thread_bar = &bars[i];
        pthread_create(&(threads[i].thread_handle), NULL, threads[i].thread_func, &threads[i]);
    }

    printf("threads created...\n");
    
    //printf(ASCII_ESC CSI "%d" PREVIOUS_LINE, NUMBER_OF_THREADS);
    for (int i=0; i<NUMBER_OF_THREADS; i++)
    {
        pthread_join(threads[i].thread_handle, NULL);
    }
    printf("\nDone!\n");
}

