#include <stdlib.h>
#include <stdio.h>

struct obj;

/*
 * The compiler considers struct obj an incomplete type. Incomplete types
 * can be used in declarations.
 */

size_t obj_size(void);

void obj_setid(struct obj *, int);

int obj_getid(struct obj *);

struct obj {
    int id;
    char name[30];
    char street[100];
};

/*
 * The caller will handle allocation.
 * Provide the required information only
 */

size_t obj_size(void) {
    return sizeof(struct obj);
}

void obj_setid(struct obj *o, int i) {
    o->id = i;
}

int obj_getid(struct obj *o) {
    return o->id;
}

int main(void)
{
    struct obj;
    printf("size: %lu\n", obj_size());
    return 1;
}

