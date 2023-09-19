#include <stdio.h>

int main(void)
{
	int num_1, num_2, num_3;
	printf("Input 3 numbers : ");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	int max, mid, min;
	
	if (num_1 >= num_2) 
	{
		max = num_1;
		min = num_2;
	}
	else 
	{
		max = num_2;
		min = num_1;
	}
	
	if (num_3 > max) 
	{
	mid = max;
	max = num_3;
	}
	else if (num_3 > min)
	{
	mid = num_3;
	}
	else 
	{
	mid = min;
	min = num_3;
	}
	
	printf("Max : %d, Mid : %d, Min : %d.\n", max, mid, min);
	
	return 0;
}
