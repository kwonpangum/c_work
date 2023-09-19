#include <stdio.h>

int get_num(void);

int main (void) 
{
	int res;
	
	res = get_num(); // 매개 변수가 필요없음.
	
	printf("%d\n", res);
	
	return 0;
}

int get_num(void)  // 매가 변수가 없고 반환형만 있음.
{
	int num ;
	printf("input number : ");
	scanf("%d", &num);
	
	return num;
}

