#include <stdio.h>

int main (void)
{
	int sum = 0;
	int i = 0;
	
	for (i=0; i<30; ++i) {
		sum += i;
		if(sum > 30) break;
	}
	
	printf("sum of under 30 is %d\n", sum);
	printf("last i is %d\n", i);

	return 0;
}
