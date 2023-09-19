# include <stdio.h>

int main(void)
{
	float fah;
	printf("Input Fahrenheit degree : ");
	scanf("%f", &fah);
	
	float cel = (fah - 32) / 1.8;
	
	printf("Fahrenheit : %.2f, Celcius : %.2f.\n", fah, cel);
	 
	return 0;
}
