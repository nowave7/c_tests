#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int some_array []= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

int main(void)
{

    printf("number of elements in the array is: %lu\n",sizeof(some_array)/sizeof(int));
    return EXIT_SUCCESS;
}
