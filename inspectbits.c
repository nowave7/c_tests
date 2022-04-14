#include <stdlib.h>
#include <stdio.h>

int inspect_bits(unsigned int number)
{
    unsigned int maskLowerBit = 1;
    unsigned int maskHigherBit = 2;
    unsigned int lowerBit;
    unsigned int higherBit;
    unsigned int result = 0;

    while (number != 0)
    {
        lowerBit = number & maskLowerBit;
        higherBit = (number & maskHigherBit)>>1;
        result = lowerBit & higherBit;
        if (result)
        {
            return 1;
        }
        number >>=1;
    }
    return 0;
}

#ifndef RunTests
int main ()
{
    printf("%d\n", inspect_bits(13));
}
#endif
