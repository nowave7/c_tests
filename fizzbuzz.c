#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int numbers = 100;
    int i;
    int other = 1;
    struct timespec *ts_start= (struct timespec*)malloc(sizeof(struct timespec));
    struct timespec *ts_end=(struct timespec*)malloc(sizeof(struct timespec));

    timespec_get(ts_start, TIME_UTC);
 
    for (i=1; i<=numbers; i++)
    {
        if (!(i%3))
        {
            other = 0;
            printf("Fizz");
        }
        if (!(i%5))
        {
            printf("Buzz");
            other = 0;
        }
        if(!(i%6))
        {
            printf("Yikes");
            other = 0;
        }
        if (other)
            printf("%d", i);
        printf("\n");
        other = 1;
    }
    //sleep(1000);

    timespec_get(ts_end, TIME_UTC);

    printf("function execution took: %ld microseconds\n", (ts_end->tv_nsec - ts_start->tv_nsec)/1000);

    return 0;

}

