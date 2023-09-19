#include <stdio.h>

double avg(double a, double b);

int main (void) 
{
	double res;
	
	res = avg(1, 3);
	
	printf("%.2f\n", res);
	
	return 0;
}

double avg(double a, double b) 
{
	double res = (a + b) / 2.0;
	
	return res;
}
