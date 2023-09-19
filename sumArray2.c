#include <stdio.h>

int sumArray(const int *pArr, int size) {
	
	int sum = 0;	
	for (int i = 0 ; i < 10 ; ++i) {
		sum += pArr[i];
		}
		
	return sum;
	
	}

int main(void)
{
	int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int sum = sumArray(nums, 10);
	
	printf("sum = %d\n", sum);
	
	return 0;
}
