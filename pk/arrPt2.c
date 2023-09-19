#include <stdio.h>

int main(void)
{
	int arr[5] = {0};
	int *pt;
	
	pt = arr;
	
	*(pt + 0) = 10;
	*(pt + 1) = 20;
	
	for (int i=0; i<5; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
