# include <stdio.h>

int main (void) 
{
	int a = 100;
	int *p;
	
	a = 100;
	p = &a;
	*p = 200;
	
	printf("a : %d\n", a);
	return 0;
}
