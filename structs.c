#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>

struct  some_first_struct
{
	int (*read1)(void);
	int (*write1)(void);
	int (*readio1)(void);
	int (*writeio1)(void);
	int (*map1)(void);
	int (*unmap1)(void);
};


int sf1(void);
int sf2(void);
int sf3(void);
int sf4(void);
int sf5(void);

static struct some_first_struct some_second_structure =
{
    .read1 = sf1,
    .write1 = sf2,
    .readio1 = sf3,
    .writeio1 = sf4,
    .map1 = sf5,
};

typedef struct
{
    int some_element1;
    char *some_element2;
}structure;

int main(int argc, char **argv)
{
    structure s1;
    structure *s2;
    char *string="0123456789";

    s1.some_element1=123;
    s1.some_element2 = (char*)malloc(11);
    strcpy(s1.some_element2, string);

    s2->some_element1;

    printf("s1.some_element1: %d\ns1.some_element2: %s\n",s1.some_element1, s1.some_element2);

    return 0;
}
