#include <stdio.h>
#include <stdlib.h>

typedef struct some_struct
{
    int value1;
    int value2;
}some_struct;

int func(some_struct **destination, some_struct source);

int main()
{
    some_struct *destination;
    some_struct source;

    source.value1 = 1;
    source.value2 = 2;

    destination = (some_struct*)malloc(sizeof(some_struct));
    destination->value1 = 0;
    destination->value2 = 0;

    func(&destination, source);

    printf("%d\n%d", destination->value1, destination->value2);

    return 1;
}

int func(some_struct **destination, some_struct source)
{
    *destination = &source;
    return 1;
}

