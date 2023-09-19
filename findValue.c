#include <stdio.h>

int main(void)
{
	int scores[10] = {1, 2, 11, 4, 5, 6, 7, 8, 9, 10};

	int value;
	printf("inout value:");
	scanf("%d", &value);
	
	int i;
	for (i = 0 ; i < 10 ; ++i) {
		if (value == scores[i]) {
			break;
			}
		}
		
	if (i == 10) {
		printf("%d is not founded\n", value);
	}
	else {
		printf("%d is founded\n", value);
	}
	
	return 0;
}
