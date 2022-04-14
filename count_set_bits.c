#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int count_set_bits(int number)
{
    int count = 0;
    int mask = 1;
    int i;
    clock_t start, end;
    struct timespec time1, time2;
    
//    start = clock();
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
    for (i=0; i<sizeof(int)*8; i++)
    {
        count += (number>>i) & mask;
    }
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
    //end = clock();

    //double time_taken = (double)(end - start);
    struct timespec time_taken = diff(time1, time2);
    printf("Ticks taken: %f\n",time_taken);
    return count;
}

int cnt_set_bits(int number)
{
    int count=0;
    clock_t start, end;
    struct timespec time1, time2;

    start = clock();
    while(number)
    {
        count++;
        number &= number-1;
    }
    end = clock();

    double time_taken = (double)(end - start);
    printf("Ticks taken: %f\n",time_taken);
 
    return count;
}

struct timespec diff(struct timespec start, struct timespec end)
{
    struct timespec temp;
    if ((end.tv_nsec-start.tv_nsec)<0) {
        temp.tv_sec = end.tv_sec-start.tv_sec-1;
        temp.tv_nsec = 1000000000+end.tv_nsec-start.tv_nsec;
    } else {
        temp.tv_sec = end.tv_sec-start.tv_sec;
        temp.tv_nsec = end.tv_nsec-start.tv_nsec;
    }
    return temp;
}

int main(int argc, char **argv)
{
    int count=0;
    int number;

    if (argc<2)
    {
        printf("Please supply the desired number!\n");
        return -1;
    }
    number=atoi(argv[1]);
    count=count_set_bits(number);
    printf("number of set bits in: %d is: %d\n",number, count);

    count=cnt_set_bits(number);
    printf("number of set bits in: %d is: %d\n",number, count);

    return 0;
}
