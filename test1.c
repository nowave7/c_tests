#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int ints[]={ -9, 14, 37, 102 };

bool exists(int ints[], int count, int k)
{
	int i=0;
	for (i=0; i<count; i++)
	{
		if (k==ints[i])
			return 1;
	}

	return 0;
}

void main(void)
{
	printf("%d\n", exists(ints, 4, 102));
	printf("%d\n", exists(ints, 4, 36));
}
