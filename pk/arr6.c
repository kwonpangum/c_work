#include <stdio.h>

int main(void)
{
	int nums[5] = {1, 2, 3, 4, 5};
	
	nums[0] = 100;
	
	for (int i=0; i<5; ++i)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
	return 0;
}
