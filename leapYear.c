# include <stdio.h>

int main(void)
{
	int year;
	printf("Input what you want to know whether leapyear or not. :");
	scanf("%d", &year);
	
	int isLeapyear = (year % 400 == 0) || ((year % 100 == 0) && (year % 400 == 0));
	
	printf("the %d is %d Leapyear.\n", year, isLeapyear); 
	
	return 0;
}
