#include <stdio.h>

int main(void)
{
	int scores[10] = {1, 2, 11, 4, 5, 6, 7, 8, 9, 10};

	//sorting
	for (int i = 0 ; i < 10-1; ++i) {
		for (int j =  + 1; j <10; ++ㅓ) {
			if (scores[i] > scores[j]) {
				int tmp = scores[i];
				scores[i] = scores[j];
				scores[j] = tmp;
				}
			} 
		}

	for (int i = 0 ; i < 10 ; ++i){
		printf("%d", nums[i];
	}
	printf("\n")
	return 0;
}
