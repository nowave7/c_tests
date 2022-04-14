#include <stdlib.h>
#include <stdio.h>

#define HASHSIZE 101

typedef struct nlist {
    struct nlist *next;
    char *name;
    char *defn;
}nlist_t;


static unsigned hash(char *s) {

    unsigned hashval;

    for (hashval = 0; *s != '\0'; s++)
        hashval = *s + 31 * hashval;

    return hashval % HASHSIZE;
}

int main(void)
{
    nlist_t *np;
    char *string = "some string";
    hash(string);
    printf("sizeof(nlist_t): %lu\nsizeof(*np): %lu\n", sizeof(nlist_t), sizeof(*np));

    return 1;
}
