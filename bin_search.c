#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    unsigned long int number;
    unsigned long int interval;
    unsigned long int ret_val = 0;
    unsigned long int steps = 0;

    if (argc <=2)
    {
        printf("Usage: bin_search number interval\n");
        return 0;
    }

    number = strtoul(argv[1], NULL, 10);
    interval = strtoul(argv[2], NULL, 10);

    unsigned long int low = 0;
    unsigned long int middle = interval/2;
    unsigned long int high = interval;

    printf("Searching for the number: %lu in interval: 0 - %lu\n", number, interval);

    struct timespec *ts_start= (struct timespec*)malloc(sizeof(struct timespec));
    struct timespec *ts_end=(struct timespec*)malloc(sizeof(struct timespec));

    timespec_get(ts_start, TIME_UTC);

    while(low<=high)
    {
        steps++;
        //printf("Algorithm step: %lu\n", steps);
        middle = (high + low)/2;
        if (middle > number)
        {
            high = middle-1;
        }
        else if (middle < number)
        {
            low = middle+1;
        }
        else
        {
            break;
        }
    }

    timespec_get(ts_end, TIME_UTC);

    printf("function execution took: %lu microseconds\n", (ts_end->tv_nsec - ts_start->tv_nsec)/1000);

    printf("The number: %lu was found in steps: %lu!\n", middle, steps);

    return ret_val;
}
