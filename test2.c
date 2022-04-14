#include <stdio.h>
#include <stdlib.h>

int bit_test(int value, int pos)
{
	int mask=1<<pos;
	value &= mask;
	return value>>pos;
}

void main(void)
{
	printf("%d \n", bit_test(5, 0));
	printf("%d \n", bit_test(5, 1));
	printf("%d \n", bit_test(5, 2));
}
