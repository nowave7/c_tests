#include <stdio.h>
#include <stdlib.h>

int func(int a, int *b);

int main()
{
    int a=1, b=1;
    func(a, &b);

    printf("a=%d\nb=%d\n", a, b);

    return 0;
}

int func(int a, int *b)
{
    a++;
    (*b)++;

    return 0;
}
