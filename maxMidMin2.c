#include <stdio.h>

int main(void)
{
	int num_1, num_2, num_3;
	printf("Input 3 numbers : ");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	
	
	printf("Max : %d, Mid : %d, Min : %d.", max, mid, min);
	
	return 0;
}
/*
int main(void)
{
    	
	int num_1, num_2, num_3;
	printf("Input 3 Numbers : ");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	int max, mid, min;
	
	// 최소값 찾기
	min = num_1;
    	if (num_2 < min) 
    	{
    	min = num_2;
    	}
       if (num_3 < min) 
       {
       min =  num_3;
        }

        // 최대값 찾기
    	max = num_1;
   	if (num_2 > max) {
       max = num_2;
        }
    	if (num_3 > max) {
       max = num_3;
        }
       // 중간값 찾기 
       mid = num_1 + num_2 + num_3 - max - min;
	
	printf("%d %d %d\n", max, mid, min);
	return 0;
}
*/
