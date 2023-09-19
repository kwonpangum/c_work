#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
	int a = 10;
	int b = 20;
	
	printf("origin a : %d, b : %d\n", a, b);
	
	swap(&a, &b);  // 주의! not swap(int &a, int &b);

	printf("swaped a : %d, b : %d\n", a, b);
	
	return 0;
}

void swap(int *pa, int *pb) 
{
	int tmp;
	
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
