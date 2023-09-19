#include <stdio.h>

int main (void)
{
	int a;
	printf("Input : ");
	scanf("%d", &a);
	
	if (a % 2 == 0) {
		a = 2;	
	} else {
		a = 1;
	}
	
	printf("%d\n", a);
	return 0;
}
