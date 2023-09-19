#include <stdio.h>

int main(void)
{
	int arr[5];
	
	arr[0] = 10;
	arr[1] = 20;
	
	int i = 0;
	do {
	printf("arr[%d] : %d\n", i, arr[i]);
	++i;
	} while (i <= 4); 

	return 0;
}
