# include <stdio.h>

int main(void)
{
	int score;
	printf("Input score: ");
	scanf("%d", &score);
	
	switch (score / 10) 
	{
	case 10:
	case 9:
		printf("Score : %d --- grage : A.\n", score);
		break;
	case 8:
		printf("Score : %d --- grage : B.\n", score);
		break;
	case 7:
		printf("Score : %d --- grage : C.\n", score);
		break;
	case 6:
		printf("Score : %d --- grage : D.\n", score);
		break;
	default: 
		printf("Score : %d --- grage : F.\n", score);
	}
	
	
	/*
	char grade;
	
	// grade = 'A' or 'B' or 'C' or 'D' or 'F'; 
	
	if (score >= 90) {
		grade = 'A';		
	} else if (score >= 80) {
		grade = 'B';
	} else if (score >= 70) {
		grade = 'C';
	} else if (score >= 60) {	
		grade = 'D';
	} else {
		grade = 'F';
	}
	
	printf("%c\n", grade);
	*/
	return 0;
}
