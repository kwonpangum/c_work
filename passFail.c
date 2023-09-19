# include <stdio.h>

int main(void)
{
	int score;
	printf("Input your score to check : ");
	scanf("%d", &score);
	
	int isPass = (score >= 60);
	
	printf("You are %d .\n", isPass);
		
	return 0;
}
