#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv)
{
    if (argc == 2)
    {
        printf("Checking license: %s\n", argv[1]);
        if(strcmp(argv[1], "AAAA-Z10N-42-ok")==0)
        {
            printf("Access granted!\n");
        }
        else
        {
            printf("Wrong license!\n");
        }
    }
    else
    {
        printf("usage: <key>\n");
    }
    return 1;
}
