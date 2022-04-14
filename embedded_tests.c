#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>

#define SECONDS_IN_A_YEAR (60UL * 60UL * 24UL * 365UL)
#define MIN(A,B) ( ((A)<=(B)) ? (A) : (B) )

int test_function(int i, char *string);

int main()
{
    int i=0;
    int a=2, b=-1;
    char *string="Some string";

    test_function(i, string); 
    printf("seconds: %lu\n", SECONDS_IN_A_YEAR);
    printf("minimum: %d\n", MIN(a, b));
    return EXIT_SUCCESS;
}

int test_function(int i, char *string)
{
    printf("%s: %d\n",string, i);
    return i;
}

int infinite_loop_for()
{
    for(;;)
    {
    }
}

int infinite_loop_while()
{
    while(1)
    {
    }
}

int infinite_loop_do()
{
    do
    {
    }while(1);
}

