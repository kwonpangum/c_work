#include <stdio.h>

int main(void)
{
	int scores[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int sum = 0;	
	for (int i = 1 ; i < 10 ; ++i) {
		sum += scores[i];
		}
	printf("%d\n", sum);
	
	return 0;
}
