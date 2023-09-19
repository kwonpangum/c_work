#include <stdio.h>

int main (void) 
{
	int a;
	printf("Inpit : ");
	scanf("%d", &a);
	
	//3의 배수이면 거짓, 아니면 참
	switch (a % 3) {
		case 0:
			printf("거짓\n");
			break;
		default:
			printf("참\n");
			break;
	}
	
	return 0;
}
