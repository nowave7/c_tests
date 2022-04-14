#include <stdio.h>

int array[] = {23, 23, 23, 23, 23, 23, 23};
#define TOTAL_ELEMENTS (sizeof(array)/sizeof(int))

int main(){
	int a;
	a=3.5;
	printf("%d\n",a);

	int d=-1, x;

	if (d <= (signed)TOTAL_ELEMENTS-2)
	{
		x = array[d+1];
		printf("%d\n",x);
	}
}
