#include <stdlib.h>
#include <stdio.h>

#define MAX_INT_RANGE 4294967296

int main(void)
{
    int counter=0;

    printf("size of int: %lu", sizeof(int));

    while (1)
    {

	  if (counter == MAX_INT_RANGE)
	  {
		  counter = 0;
          printf("Integer limit reached!\n Counter set to zero!\n");
	  }
	  else
	  {
		  counter++;
	  }
    }

    return 0;
}
