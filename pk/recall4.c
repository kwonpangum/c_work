#include <stdio.h>

int recall_func(int num);

int main (void)
{
	int res;
	int n = 100;
	
	res = recall_func(n);

	printf("1부터 %d까지의 합은 %d입니다.\n", n, res);
	
	return 0;
}

int recall_func(int num)
{
	if (num == 1) {
		return 1;
	} else {
		return num + recall_func(num-1);
	}
}


