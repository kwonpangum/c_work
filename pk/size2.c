#include <stdio.h>

int main(void)
{
	int scores[10];
	int count;
	
	count = sizeof(scores) / sizeof(scores[0]);
	printf("정수형 Score 배열은 %ld 바이트 입니다.\n", sizeof(scores));
	printf("Score 엘리멘트는 %ld 바이트입니다.\n", sizeof(scores[0]));
	printf("Score의 크기는 %d 입니다.\n", count);

	return 0;	
}
