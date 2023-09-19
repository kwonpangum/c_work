#include <stdio.h>

int main(void)
{
	int arr[5];
	
	arr[0] = 90;
	arr[1] = 80;
	
	int i = 0;
	do {
		printf("%d <- %d\n", i, arr[i]);
		++i;
	} while (i < 5);

	return 0;
}
