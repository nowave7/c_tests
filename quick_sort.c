#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ELEMENTS 2
#define MAX_NUMBER_LENGTH 50

void sort(int *array, int array_size);

int main()
{
    int iterator = 0;
    //int array[MAX_ELEMENTS] = {9, 4, 6, 3, 2, 1, 0, 8, 7, 5};
    int array[MAX_ELEMENTS] = {2, 5};
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
    
    sort(array, sizeof(array)/sizeof(int));

    printf("sorted array is:\n");
    for(iterator=0; iterator < MAX_ELEMENTS; iterator++)
    {
        printf("%d: %d\n",iterator, array[iterator]);
    }


    return 1;
}

void sort(int *array, int array_size)
{
    if (array_size <= 1)
    {
        return 
    }
    int pivot = array[array_size/2];
    

}

void swap(int *array, int position1, int position2)
{
    int temp;
   
    if (position1 == position2)
    {
        return;
    }
    temp = array[position1];
    array[position1]=array;
    array[position2]=temp;
}

