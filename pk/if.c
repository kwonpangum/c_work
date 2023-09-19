#include <stdio.h>

int main (void)
{
	int a, b;
	printf("Input :");
	scanf("%d", &a);
	
	// a > 0
	if (a>0) {
		b = 1;
	// a == 0		
	} else if (a == 0){
		b = 0;
	//a < 0	
	} else {
		b = -1;
	}
	printf("%d\n", b);
	return 0;
}
