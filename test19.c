#include<stdio.h>

struct emp
{
    int ecode;
    struct emp *e;
};

    struct course
    {
        int courseno;
        char coursename[25];
    };
int main()
{
    struct course c[] = { {102, "Java"}, 
                          {103, "PHP"}, 
                          {104, "DotNet"}     };

    printf("%d ", c[1].courseno);
    printf("%s\n", (*(c+2)).coursename);
    return 0;
}
