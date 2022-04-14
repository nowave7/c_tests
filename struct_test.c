#include <stdlib.h>
#include <stdio.h>

struct some_struct
{
    int some_struct_id;
};

typedef struct some_new_struct
{
    int some_struct_id;
}some_new_struct;

struct some_struct some_var;
some_new_struct some_var1;

void main()
{
    some_var.some_struct_id = 0;
    some_var1.some_struct_id = 1;
    printf("Some struct id is: %d\n", some_var.some_struct_id);
    printf("Some new struct id is: %d\n", some_var1.some_struct_id);
}
