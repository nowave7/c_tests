#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *string="Some string\0";
    printf("Length of the string is: %ld\n", strlen(string));
 
    return 1;
}
