# include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	int result;
	
	if (num >= 0) {
		result = num;
	} else {
		result = -num;
	}
	
	
	printf("AbsuluteValue is %d.\n", result);
	return 0;
}
