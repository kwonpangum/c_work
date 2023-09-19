#include <stdio.h>

int main(void) 
{
	int a = 10;
	int b = 20;
	
	if (a >= 10) {
		if (b >=10) {
			b = 1;
		} else {
			b = 0;
		}
	}
	
	printf("%d %d", a, b);
	return 0;
}
