#include <stdio.h>

void print_name(void);
long long sum(int num);

int main(void) 
{
	print_name();
	
	int num;
	printf("1에서 원하는 숫자까지의 합을 구하는 프로그램입니다. : ");
	scanf("%d", &num);
	
	int res = sum(num);
	printf("%d\n", res);
	
	return 0;
}

void print_name(void)
{
	char name[20];
	printf("이름을 입력하세요 : ");
	scanf("%s", name);
	printf("당신의 이름은 %s입니다.\n", name);
}

long long sum(int num)
{
	long long res=0;
	for (long long i=0; i<=num; ++i) {
		if (num == 1) {
			return 1;
		} else {
			res = num + sum(num-1);
		}
	}
	return res;
}


