# include <stdio.h>

int main(void)
{
	int score;
	printf("Input score: ");
	scanf("%d", &score);
	
	if (score >= 90) {
		printf("Your grade %d is A.\n", score);
	} else if (score >= 80) {
		printf("Your grade %d is B.\n", score);
	} else if (score >= 70) {
		printf("Your grade %d is C.\n", score);
	} else if (score >= 60) {
		printf("Your grade %d is D.\n", score);
	} else {
		printf("Your grade %d is F.\n", score);
	}
	
	return 0;
}
