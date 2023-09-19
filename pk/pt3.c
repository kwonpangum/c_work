#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
	int a = 10, b = 20;
	int *pa = &a, *pb = &b;

	printf("origin a : %d,  b : %d\n", *pa, *pb);
		
	swap(pa, pb);
	
	printf("swaped a : %d,  b : %d\n", *pa, *pb);

	return 0;
}

void swap(int *pa, int *pb) {
	int tmp;
	
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
