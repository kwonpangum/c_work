# include <stdio.h>

void swap(int *pa, int *pb) {

	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main (void) 
{
	int a = 100;
	int b = 200;
	
	swap(&a, &b);
	
	printf("%d, %d\n", a, b);
	return 0;
}
