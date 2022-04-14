#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

typedef struct record_data
{
    int index;
    char *first_name;
    char *last_name;
    char *occupation;
}record_data;

typedef struct list_node
{
    void *record;
    struct list_node *next;
}list_node_t;

int show_list(list_node_t *list);
int remove_entire_list(list_node_t **list);

int main(int argc, char* argv[])
{
    record_data *entry;
    char *first_name = "Vladimir\0";
    char *last_name = "Baus\0";
    char *occupation = "Engineer\0";
    int index = 0;

    list_node_t *list;

    entry = (record_data*)malloc(sizeof(record_data));
    entry->first_name = (char*)malloc(strlen(first_name));
    strcpy(entry->first_name, first_name);
    entry->last_name = (char*)malloc(strlen(last_name));
    strcpy(entry->last_name, last_name);
    entry->occupation = (char*)malloc(strlen(occupation));
    strcpy(entry->occupation, occupation);
    entry->index = index;

    list = (list_node_t*)malloc(sizeof(list_node_t));
    list->record = entry;
    list->next = NULL;

    show_list(list);
    remove_entire_list(&list);
    show_list(list);

    return 1;
}

list_node_t *create_list()
{
    return (list_node_t*)malloc(sizeof(list_node_t));
}

int add_head(list_node_t *new_node, list_node_t **list)
{
    new_node->next = *list;
    *list = new_node;

    return 1;
}

int add_tail(list_node_t *new_node, list_node_t **list)
{
    list_node_t *current = *list;

    while(current->next!=NULL)
    {
        current = current->next;
    }
    return 1;
}

int add_at_index()
{

    return 1;
}

int remove_head()
{

    return 1;
}

int remove_tail()
{

    return 1;
}

int remove_at_index()
{

    return 1;
}

int remove_entire_list(list_node_t **list)
{
    list_node_t *current=NULL;

    current = *list;
    if (current==NULL)
    {
        printf("The list is empty!\n");
        return -1;
    }
    while (current!=NULL)
    {
        current = (*list)->next;
        free(*list);
        (*list) = current;
    }
    *list = NULL;

    return 1;
}

int show_list(list_node_t *list)
{
    list_node_t *current=NULL;

    current = list;
    if (current==NULL)
    {
        printf("The list is empty!\n");
        return -1;
    }
    while (current!=NULL)
    {
        printf("Entry first name: %s\n", ((record_data*)list->record)->first_name);
        printf("Entry last name: %s\n", ((record_data*)list->record)->last_name);
        printf("Entry occupation: %s\n", ((record_data*)list->record)->occupation);
        printf("Entry index: %d\n", ((record_data*)list->record)->index);

        current=current->next;
    }

    return 1;
}

