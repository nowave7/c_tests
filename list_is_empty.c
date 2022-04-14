#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
}linked_list;

int is_empty(linked_list *list)
{
    return (list==NULL);
}

int some_function()
{
    linked_list *some_list;
    printf("is empty: %d\n", is_empty(some_list));
    
    some_list = (linked_list*)malloc(sizeof(linked_list));
    printf("is empty: %d\n", is_empty(some_list));

    return 0;
}

linked_list *global_list;

int main(void)
{
    some_function();
    linked_list *some_list;
    printf("is list empty? %d\n", is_empty(some_list));
    
    some_list = (linked_list*)malloc(sizeof(linked_list));
    printf("is list empty? %d\n", is_empty(some_list));
    return 0;
}
