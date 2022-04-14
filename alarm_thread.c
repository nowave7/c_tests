#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "errors.h"

typedef struct alarm_tag
{
    int seconds;
    char message[65];
}alarm_t;

void *alarm_func(void *args)
{
    alarm_t *alarm = (alarm_t*)args;
    int status = 0;

    status = pthread_detach(pthread_self());
    if (status != 0)
    {
        err_abort(status, "pthread_detach failed!");
    }

    sleep(alarm->seconds);
    printf("(%d) %s\n", alarm->seconds, alarm->message);
    free(alarm);

    return NULL;
}

int main(void)
{
    int status = 0;
    char line[128];
    alarm_t *alarm;
    pthread_t thread;

    while (1)
    {
        printf("Please enter the alarm time and message: ");
        if (fgets(line, sizeof(line), stdin) == NULL)
        {
            return 0;
        }
        
        if (strlen(line)<=1)
            continue;

        alarm = (alarm_t*)malloc(sizeof(alarm_t));

        if (alarm == NULL)
        {
            printf("Unable to allocate necessary memory!\n");
            errno_abort("Unable to allocate necessary memory!");
        }

        if (sscanf(line, "%d %64[^\n]",
                   &alarm->seconds, alarm->message) < 2)
        {
            printf("Bad command entered!");
            free (alarm);
            return errno;
        }
        else
        {
            status = pthread_create(&thread, NULL, alarm_func, alarm);
            if (status != 0)
            {
                errno_abort("Unable to create thread!");
            }
        }
    }


    return 1;
}
