#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>
#include <unistd.h>
#include <pthread.h>


#define NUMBER_OF_BARS 5
#define PROG_BAR_LENGTH 30
#define NUMBER_OF_THREADS 5

typedef void* (*func)(void*);

#define false 0;
#define true 1;

typedef struct
{
    pthread_t thread;
    int count_to_val;
    int progress;
    func thread_func;
}thread_info;

void update_bar(thread_info *thread)
{
    int num_chars = (thread->progress * 100 / thread->count_to_val) * PROG_BAR_LENGTH / 100;
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
}

void *some_func(void *arg)
{
    thread_info *thread = (thread_info*)arg;

    for (thread->progress = 0;
         thread->progress < thread->count_to_val;
         thread->progress++)
    {
        usleep(1000);
    }
    return NULL;
}

int main()
{
    printf("starting bar threads example...\n");
    thread_info threads[NUMBER_OF_THREADS];

    for (int i=0; i<NUMBER_OF_THREADS; i++)
    {
        threads[i].count_to_val = rand() % 1000;
        threads[i].progress = 0;
        threads[i].thread_func = some_func;
        pthread_create(&(threads[i].thread), NULL, threads[i].thread_func, &threads[i]);
    }

    printf("threads created...\n");
    _Bool done = false;

    while (!done)
    {
        done = true;

        for (int i=0; i<NUMBER_OF_THREADS; i++)
        {
            update_bar(&threads[i]);
            if (threads[i].progress <threads[i].count_to_val)
            {
                done = false;
            }
        }
        if (!done)
        {
            printf("\033[5F");
        }
        usleep(1000);
    }

    printf("Done!\n");
}

