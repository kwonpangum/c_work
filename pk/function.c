#include <stdio.h>

// 함수 선언
int sum(int a, int b);

// 함수 호출
int main(void) 
{
	int x = 3;
	int y = 4;
	
	int result = sum(x, y);
	
	printf("%d + %d = %d\n", x, y, result);
	
	return 0;
}
// 함수 정의
int sum(int a, int b) 
{
	int tmp;
	
	tmp = a + b;
	
	return tmp;
}
