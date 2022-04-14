#include <stdio.h>
#include <stdlib.h>

#define MASK (0x1)

int main(int argc, char **argv)
{
    int test_number;
    int position;
    int bit=0;

    if (argc<3)
    {
        printf("usage: bit_tests number position\n");
        return 0;
    }

    test_number = strtol(argv[1], NULL, 10);
    position = strtoul(argv[2], NULL, 10);

    bit = (test_number >>position)&MASK; 
    printf("value of the bit in position: %d of the number: %d is: %d\n", position, test_number, bit);
    return 1;
}
