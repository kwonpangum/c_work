#include <stdio.h>

int main (void) 
{
	int num;

	printf("Input Number : ");
	scanf("%d", &num);

	int isPrime = 1;
	
	for(int i=2; i<num; ++i) {
		if (num % i == 0) {
		isPrime = 0;
		}
	} 
	
	if (isPrime == 1) {
		printf("%d는 소수입니다.\n", num);
	} else {
		printf("%d는 소수가 아닙니다.\n", num);
	}
	
	return 0;
}
