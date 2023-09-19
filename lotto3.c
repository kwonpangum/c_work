#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int balls[45];

	for (int i = 0; i < 45; ++i) {
		balls[i] = i + 1;
	}

	srand(time(NULL));
	for (int i = 1; i <= 10000; ++i) {
		int left = rand() % 45;
		int right = rand() % 45;
		
		int temp = balls[left];
		balls[left] = balls[right];
		balls[right] = temp;
	}	
	
	for (int i = 0; i < 7; ++i) {
		printf("%2d ", balls[i]);
	
	}
	printf("\n");
	return 0; 
}
	
	 
	
