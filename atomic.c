#include <stdio.h>
#include <stdlib.h>

struct big { int array[32]; };

volatile _Atomic struct big big_atom;
struct big b;

int main()
{
    big_atom = b;

    return EXIT_SUCCESS;
}
