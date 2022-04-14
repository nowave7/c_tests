#include <stdio.h>

#define paster( n ) token##n
int token9=10;

int main(void)
{
    printf("%d\n",paster(9));
}
