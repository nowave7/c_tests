#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

#define MAX_ELEMENTS 10
#define MAX_NUMBER_LENGTH 50

void select_sort(int *array, int array_size);
int less_than(const void *first, const void *second);

int main()
{
    int iterator = 0;
    int array[MAX_ELEMENTS] = {9, 4, 6, 3, 2, 1, 0, 8, 7, 5};
#ifdef INPUT
    char number[MAX_NUMBER_LENGTH];

    printf("insert %d elements into the array:\n", MAX_ELEMENTS);

    for(iterator=0; iterator < MAX_ELEMENTS; iterator++)
    {
        fgets(number, sizeof(number), stdin);
        array[iterator] = atoi(number);
    }

    printf("entered array is:\n");
    for(iterator=0; iterator < MAX_ELEMENTS; iterator++)
    {
        printf("%d: %d\n",iterator, array[iterator]);
    }
#endif
    
    //qsort(array, sizeof(array)/sizeof(int), sizeof(int), &less_than);
    select_sort(array, sizeof(array)/sizeof(int));

    printf("sorted array is:\n");
    for(iterator=0; iterator < MAX_ELEMENTS; iterator++)
    {
        printf("%d: %d\n",iterator, array[iterator]);
    }


    return 1;
}

void select_sort(int *array, int array_size)
{
    int min=0;
    int index_start = 0;
    int index_found = 0;
    int inner_iterator = 0;
    int outer_iterator;
    int temp = 0;
    _Bool to_swap = false;
    struct timespec *ts_start= (struct timespec*)malloc(sizeof(struct timespec));
    struct timespec *ts_end=(struct timespec*)malloc(sizeof(struct timespec));

    timespec_get(ts_start, TIME_UTC);
    for (outer_iterator = 0; outer_iterator<array_size; outer_iterator++)
    {
        index_start = outer_iterator;
        min = array[outer_iterator];   
        for (inner_iterator = outer_iterator+1; inner_iterator< array_size; inner_iterator++)
        {
            if (min>array[inner_iterator])
            {
                min = array[inner_iterator];
                index_found = inner_iterator;
                to_swap = true;
            }
        }
        if (to_swap)
        {
        temp = array[index_start];
        array[index_start] = min;
        array[index_found] = temp;
        to_swap = false;
        }
    }

    timespec_get(ts_end, TIME_UTC);
    printf("function execution took: %ld microseconds\n", (ts_end->tv_nsec - ts_start->tv_nsec)/1000);
}

int less_than(const void *first, const void *second)
{
    return *((int*)first) - *((int*)second);
}

void generate_random_array(int number_of_elements, int *generated_array)
{
}
