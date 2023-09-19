#include <stdio.h>

int main(void)
{
	int a;
	int *pa;
	
	pa = &a;
	
	a = 10;
	
	printf("a   : %d\n", a);
	printf("&a  : %p\n", &a);
	printf("*pa : %d\n", *pa);
	
	*pa = 20;
	printf("*pa : %d\n", *pa);	
	printf("a   : %d\n", a);

	return 0;
}
