#include <stdio.h>

int main(void) 
{
	int arr[5];
	
	int i = 0;
	do {
		printf("%d <- %d\n", i, arr[i]);
		++i;
	} while (i < 5);

	return 0;
}
