# include <stdio.h>

int main(void)
{
	int scores[5];
	
	for (int i = 0; i < 5; ++i) {
		scanf("%d", &scores[i]);
	}
	
	int sum = 0;
	for (int i = 0; i < 5; ++i) {
		sum = sum + scores[i];
		}
		
	double average = (double) sum / 5.0;
	
	printf("sum : %d\taverage : %.2f\t\n", sum, average);
	
	return 0;
}
