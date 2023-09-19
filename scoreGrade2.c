# include <stdio.h>

int main(void)
{
	int score;
	printf("Input score: ");
	scanf("%d", &score);
	
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
}
