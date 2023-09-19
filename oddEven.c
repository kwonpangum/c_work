#include <stdio.h>

int main(void)
{
	int num;

	printf("Input Number : ");
	scanf("%d", &num);

	int isEven = (num % 2 == 0);
	
	printf("Your number is %d .\n", isEven);
	
	return 0;
}

