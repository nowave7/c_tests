#include <stdio.h>

typedef int (*int_func_int) (int);

int add3(int x) {
	return x + 3;
}

int twice(int_func_int f, int v) {
	return f(f(v));
}

int main() {
	printf("%d\n", 
		twice(add3, 7)
	);
	
	return 0;
}
