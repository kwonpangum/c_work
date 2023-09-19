# include <stdio.h>

int main(void)
{
	int num;
	printf("Input Number : ");
	scanf("%d", &num);
/*	
	if (num > 0) {
		printf("%d is a Positive number.\n", num);
	} else if (num = 0) {
		printf("%d is Zero number.\n", num);
	} else {
		printf("%d is a Negative number.\n", num);
		}
*/	
	printf("%d is a %s.\n", num, (num > 0) ? "positive" : (num == 0) ? "zero" : "negative");
	
	return 0;
}
