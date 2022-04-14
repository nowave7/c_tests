#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <stdint.h>

#define ROWS 100000
#define COLS 10000

int matrix[ROWS][COLS];

int main()
{
    printf("starting memory usage test...\n");
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
        {
            //printf("i=%d j=%d", i, j);
            matrix[i][j] = 1;
        }
    }

    printf("randomization done!\n");
    int64_t sum = 0;
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
        {
            sum += matrix[i][j];
        }
    }

    printf("sum = %ld\n", sum);

    return 0;
}

