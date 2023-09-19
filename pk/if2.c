#include <stdio.h>

int main (void)
{
	int a;
	printf("Input : ");
	scanf("%d", &a);
	
	if (a < 0) {
		a = -a;	
	}
	
	printf("%d\n", a);
	return 0;
}
