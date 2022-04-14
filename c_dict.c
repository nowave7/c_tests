#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#define HASHSIZE  3

struct nlist { /* table entry: */
    struct nlist *next; /* next entry in chain */
    char *name; /* defined name */
    char *defn; /* replacement text */
};

static struct nlist *hashtab[HASHSIZE]; /* pointer table */

struct nlist *lookup(char *s);
struct nlist *install(char *name, char *defn);
char *strdup(char *);
unsigned hash(char *s);

/* hash: form hash value for string s */
unsigned hash(char *s)
{
    unsigned hashval;
    for (hashval = 0; *s != '\0'; s++)
    {
        hashval = *s + 31 * hashval;
    }
    return hashval % HASHSIZE;
}

/* lookup: look for s in hashtab */
struct nlist *lookup(char *s)
{
    struct nlist *np;
    for (np = hashtab[hash(s)]; np != NULL; np = np->next)
    {
        if (strcmp(s, np->name) == 0)
        {
            printf("hit: %s!\n",s);
            return np; /* found */
        }
        printf("miss: %s!\n", s);
    }
    return NULL; /* not found */
}

/* install: put (name, defn) in hashtab */
struct nlist *install(char *name, char *defn)
{
    struct nlist *np;
    unsigned hashval;
    if ((np = lookup(name)) == NULL)
    { /* not found */
        np = (struct nlist *) malloc(sizeof(*np));
        if (np == NULL || (np->name = strdup(name)) == NULL)
          return NULL;
        hashval = hash(name);
        np->next = hashtab[hashval];
        hashtab[hashval] = np;
    }
    else
    {
        /* already there */
        free((void *) np->defn); /*free previous defn */
    }
    if ((np->defn = strdup(defn)) == NULL)
    {
       return NULL;
    }
    return np;
}

char *strdup(char *s) /* make a duplicate of s */
{
    char *p;
    p = (char *) malloc(strlen(s)+1); /* +1 for ’\0’ */
    if (p != NULL)
    {
       strcpy(p, s);
    }
    return p;
}

int main()
{
    struct nlist *found = NULL;
    printf("***************install******************\n");
    install("start","first");
    install("start1","second");
    install("start2","third");
    install("start3","fourth");
    install("start4","fifth");
    install("start5","sixth");

    printf("***************lookup******************\n");
    found = lookup("start");
    if (found)
    {
        printf("name: %s\ndef: %s\n", found->name, found->defn);
    }
    found = lookup("start1");
    if (found)
    {
        printf("name: %s\ndef: %s\n", found->name, found->defn);
    }
    found = lookup("start2");
    if (found)
    {
        printf("name: %s\ndef: %s\n", found->name, found->defn);
    }
    found = lookup("start3");
    if (found)
    {
        printf("name: %s\ndef: %s\n", found->name, found->defn);
    }
    found = lookup("start4");
    if (found)
    {
        printf("name: %s\ndef: %s\n", found->name, found->defn);
    }
    found = lookup("start5");
    if (found)
    {
        printf("name: %s\ndef: %s\n", found->name, found->defn);
    }

    
    
    return 0;
}
