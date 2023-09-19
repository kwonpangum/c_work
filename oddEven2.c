#include <stdio.h>

int main(void)
{
	int num;

	printf("Input Number : ");
	scanf("%d", &num);

	if (num % 2 /*== 1*/) {
		printf("%d is Odd.\n", num); 
	} else {
	
		printf("%d is Even.\n", num);
	}	
	
	return 0;
}

