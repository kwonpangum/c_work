#include <stdio.h>

int main(void)
{
	int a;
	printf("정수를 입력하세요. : ");
	scanf("%d", &a);
	
	int isPrime = 1;
	
	for (int i=0; i<5; ++i) {
		for (int j=0; j<5; ++j) {
			for (int k=2; k<a; ++k) {
				if (a % k == 0) {
					printf("%d ", k);	
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
