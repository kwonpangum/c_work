# include <stdio.h>

int get_num (void); 

int main (void) 
{

	int num;
	
	int res = get_num();
	
	printf("%d\n", res);

return 0;
}

int get_num (void) 
{
	int num;
	printf("Input num, not negative : ");
	scanf("%d", &num);
	
	while (num <0) {
		printf("양수를 입력하세요: ");
		scanf("%d", &num);
	}
	
	return num;
}
