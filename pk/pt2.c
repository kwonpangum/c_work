#include <stdio.h>

int main(void)
{
	int a = 10;
	int *pa = &a;
	
	*pa = 30;
	
	printf("%d\n", *pa);
	return 0;
}
