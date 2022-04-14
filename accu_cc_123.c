#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPower(int number)
{
    if (number==1) return 1;
    {
        int i;
        for (i = number%2==0 ? 2 : 3; i<=sqrt(number); i+=2)
            if (pow(i, round(log(number)/log(i)))==number)
                return 1;
 
        return 0;
    }
}

int main(int argc, char **argv)
{
    int number;
    if (argc > 1)
    {
        number = atoi(argv[1]);
        if (number < 0)
        {
            printf("This program only accepts positive integers!\n");
            return 0;
        }
    }
    else
    {
        printf("Usage: accu_example number\n");
        return 0;
    }

    printf("isPower(%d) => %d\n", number, isPower(number));
    return 0;
}

