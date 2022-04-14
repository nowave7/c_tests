#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char buff[4];
int k=0x01020304;

void main(void)
{
    int i=0;

    memcpy(buff, &k, sizeof(k));
    printf("number: %d\n", k);
    for(i=0; i<4; i++)
    {
        printf("buff[%d]: %d\n",i,buff[i]);
    }
    if (buff[3]&((k&0xFF000000)>>24))
    {
        printf("This architecture is Little Endian architecture!\n");
    }
    else
    {
        printf("This architecture is Big Endian architecture!\n");
    }
}
