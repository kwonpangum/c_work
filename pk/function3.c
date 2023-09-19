#include <stdio.h>

double centiToMeter(double centi);

int main (void) 
{
	double centi;
	printf("Input Double : ");
	scanf("%lf", &centi);
	
	double res = centiToMeter(centi);

	printf("centimeter : %dcm => meter : %.2lfm.\n", (int)centi, res);
	return 0;
}

double centiToMeter(double centi) 
{
	double res = centi * 0.01;
	 
	return res ; 
}
