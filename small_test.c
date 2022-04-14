#include <stdio.h>
#include <stdlib.h>

typedef int*(*func_ptr)(int, int*);
typedef int(*func_ptr1)(int, int);
typedef int(*array_ptr)[100];

int *function1(int a1, int *a2);
int high_order_func(func_ptr1 func, int arg1, int arg2);
int low_order_func(int arg1, int arg2);


int main(void)
{
    int something = 2;
    int number = 1;
    int *some_pointer = (int*)malloc(sizeof(int));
    array_ptr array;
    func_ptr function = &function1;

    some_pointer = function(number, &something);
    printf("Some pointer is: %d\n", *some_pointer);

    some_pointer = function1(number, &something);
    printf("Some pointer is: %d\n", *some_pointer);

    printf("something is: %d\n", something);

    printf("functions: %d\n",high_order_func(&low_order_func, 1, 2));

    return 1;
}

int *function1(int a1, int *a2)
{
    *a2 += a1;
    return a2;
}

int low_order_func(int arg1, int arg2)
{
    return arg1+arg2;
}

int high_order_func(func_ptr1 func, int arg1, int arg2)
{
    return func(arg1, arg2);
}

