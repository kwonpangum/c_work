# include <stdio.h>

int main(void)
{
	int score;
	printf("Input your score to check : ");
	scanf("%d", &score);
	
	
	printf("score: %d --- %s\n", score, (score >= 60)? "pass" : "fail");  //조건식 연산자. 
	
	/*
	// int isPass = (score >= 60);
	
	if (score >= 60) {
		printf("score: %d --- pass.\n", score);
	} else {
		printf("score: %d --- fail.\n", score);
	}
	*/
	return 0;
}
