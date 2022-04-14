#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[80];
    int i;
    printf("Enter a line of text\n");
    gets(sentence);
    for(i=strlen(sentence)-1; i >=0; i--)
        putchar(sentence[i]);
    return 0;
}
