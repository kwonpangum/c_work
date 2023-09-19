#include <stdio.h>

int main(void)
{
	int arr[3] = {0};

	*(arr + 0) = 10;
	*(arr + 1) = *(arr + 0) + 10;
	
	printf("세번째 배열에 들어갈 정수를 입력 : ");
	scanf("%d", arr+2); //arr+2 = &arr[2]
	
	
	for (int i=0; i<3; ++i) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}
