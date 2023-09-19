# include <stdio.h>

int main(void)
{
	int score;
	printf("Input score: ");
	scanf("%d", &score);
	
	char grade;
	
	switch (score / 10) 
	{
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default: 
		grade = 'F';
	}
	
	printf("score : %d --- grade : %c.\n", score, grade);
	return 0;
	
	
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
	return 0;
	*/
}
