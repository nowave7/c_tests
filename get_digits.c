#include <stdio.h>
#include <stdlib.h>

void get_digits(int number);
int get_abs(int number);

int main(int argc, char **argv)
{
    get_digits(-1235230);
}

void get_digits(int number)
{
    int digit = 0;
    int divider = 10;
    int i = 0;

    for(i = 1; number != 0; i++)
    {
        digit = number % divider;
        printf ("%d. digit is: %d\n", i, get_abs(digit));
        number /= divider;
    }
}

int get_abs(int number)
{
    if (number>0)
        return number;
    return -1*number;
}
