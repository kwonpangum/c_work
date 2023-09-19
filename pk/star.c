#include <stdio.h>

int main (void) 
{
	for (int i=0; i<21; ++i) {
		for (int j = 0; j<21; ++j) {
			// 같으면 or 합이 4이면  
			if (i == j || i + j == 20) {
				printf("*");
			} else {
				printf(" ");	
			}
		}
		printf("\n");
	}

	return 0;
}
