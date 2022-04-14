#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

static int reverse_words(char *string);
void reverse(char* begin, char* end);
void reverseWords(char* s);

int main(int argc, char **argv)
{
    char *string = NULL;
    int ret_val = 0;

    if (argc <=1)
    {
        printf("Usage: reverse \"input string\"\n");
        return 0;
    }
    string = argv[1];
    /*ret_val = reverse_words(string);
    printf("string is now: %s\n", string);
    printf("%s\n", string);
    */

    reverseWords(string);
    printf("%s\n", string);

    assert(strcmp(string, "words? these reverse you Can") == 0);

    return ret_val;
}

int reverse_words(char *string)
{
    const char space = ' ';
    char *start;
    char *word_boundry;
    int space_count = 0;

    *(string+strlen(string)) = '\0';
    string = string;

    start = string;
    word_boundry = string + strlen(string);

    while (start != word_boundry)
    {
        char temp = *word_boundry;

        if (temp == space)
        {
            printf("%s ", word_boundry+1);
            space_count++;
            *word_boundry = '\0';
        }
        word_boundry--;
    }

    printf("%s ", word_boundry);
    printf("\n");
    printf("total amount of spaces in the sentence is: %d\n", space_count);
    return 0;
}

 void reverse(char* begin, char* end) 
{ 
    char temp; 
    while (begin < end) { 
        temp = *begin; 
        *begin++ = *end; 
        *end-- = temp; 
    } 
} 
  
void reverseWords(char* s) 
{ 
    char* word_begin = s; 
  
    char* temp = s; 
  
    while (*temp) { 
        temp++; 
        if (*temp == '\0') { 
            reverse(word_begin, temp - 1); 
        } 
        else if (*temp == ' ') { 
            reverse(word_begin, temp - 1); 
            word_begin = temp + 1; 
        } 
    } 
  
    reverse(s, temp - 1); 
}

