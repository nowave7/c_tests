#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#define MAX_STACK_SIZE 256

typedef struct stack_entry
{
    int value;
    struct stack_entry *next;
}stack_entry;

int stack_count=0;

int push(stack_entry **stack, stack_entry *element);
stack_entry *pop(stack_entry **stack);

int main()
{
    int i, ret=0;
    stack_entry *stack=NULL;
    stack_entry *element;
    
    for (i=0; i<=255; i++)
    {
        element = (stack_entry*)malloc(sizeof(stack_entry));
        element->value = i;
        element->next = NULL;
        ret = push(&stack, element);
        if (ret)
        {
        printf("pushed onto stack %d\n",element->value);
        }
    }
  
    for (i=0; i<=258; i++)
    {
        element = pop(&stack);
        if (element == NULL)
        {
            printf("Stack is really empty!\n");
        }
        else
        {
            printf("poped from stack: %d\n", element->value);
        }
    }

    return 0;
}

int push(stack_entry **stack, stack_entry *element)
{
    if (stack_count==MAX_STACK_SIZE)
    {
        printf("Maximal stack size %d reached!\n", MAX_STACK_SIZE);
        return -1;
    }
    else
    {
        element->next = *stack;
        *stack = element;
        stack_count++;
        return 0;
    }
}

stack_entry *pop(stack_entry **stack)
{
    stack_entry *temp;
    if (stack_count==0)
    {
          printf("Stack is empty!\n"); 
          return NULL;
    }
    else
    {
        temp = *stack;
        *stack = (*stack)->next;
        stack_count--;
        return temp;
    }
}

int is_stack_empty(stack_entry *stack)
{
    return stack_count?0:1;
}
