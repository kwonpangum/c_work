#include <stdio.h>

int main (void)
{
	int a = 1;
	
	for (int i=0; i<3; ++i) {
		a *= 2;
		printf("i : %d, a : %d.\n",  i+1, a);
	}
	return 0;
}
