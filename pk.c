#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("Input 3 numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	
	int max, mid, min;
	
	if (a >= b)
	{
		max = a;
		min = b; // a b
		if (c >= a)
		{
			max = c;
			mid = a;
			//c a b 
		}
		else if (c <= b)
		{
			mid = b;
			min = c;
			// a b c
		}
		else
		{
			max = a;
			mid = c;
			min = b;
			// a c b 
		}
	}
	else (a < b)
	{
		max = b;
		min = a;
		// b a
		if (c >= b)
		{
			max = c;
			mid = b;
			min = a;
			// c b a 
		}
		else if (c < a)
		{
			max = b;
			mid = a;
			min = c;
			// b a c
		}
		else
		{
			max = b;
			mid = c;
			min = a;	
			// b c a
		} 
	}
	
	print("Max : %d, Mid : %d, Min : %d", max, mid, min)
	
	return 0;
}
