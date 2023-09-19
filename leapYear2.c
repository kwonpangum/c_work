# include <stdio.h>

int main(void)
{
	int year;
	printf("Input what you want to know whether leapyear or not. :");
	scanf("%d", &year);
	
	// int isLeapyear = (year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0));
	
	if ((year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0))) {
		printf("%d is a leapyear.", year);
	}
	else {
		printf("%d is ordinary.", year);	
	}
	
	return 0;
}
