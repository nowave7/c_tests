#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define dynarray(T) T*

typedef struct dynarray_info
{
    isize_t size;
    isize_t capacity;
    isize_t element_size;
}dynarray_info;

#define dynarray_add(arr, ...) dynarry_ensure_capactiy(arr); (*arr)[dynarray_size(*arr)] = __VA_ARGS__

int main(void)
{
    dynarray(int) array = dynarray_init(int, 10);
    dynarray_add(&array, 99);
}
