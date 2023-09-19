#include <stdio.h>

int main (void)
{
	int seats = 70;
	int audience = 65;
	
	//입장률
	double result = (double)audience / (double)seats * 100.0;
	
	printf("입장률 : %.1lf%%.\n", result);
	
	return 0;
}
