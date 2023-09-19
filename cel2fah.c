# include <stdio.h>

int main(void)
{
	float cel;
	printf("Input Celsius degree : ");
	scanf("%f", &cel);
	
	float fah = ((cel) * 9 / 5) + 32;
	
	printf("Celsius : %.2f, Fahrenheit : %.2f.\n", cel, fah);
	 
	return 0;
}
