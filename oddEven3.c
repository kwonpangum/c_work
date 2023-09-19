#include <stdio.h>

int main(void)
{
	int num;

	printf("Input Number : ");
	scanf("%d", &num);
	
/*
	if (num % 2) {
		printf("%d is Odd.\n", num); 
	} else {
	
		printf("%d is Even.\n", num);
	}
*/

	printf("%d is %s.\n", num, (num % 2 == 0)? "Even" : "Odd" );
	
	return 0;
}

