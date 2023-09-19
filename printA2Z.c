# include <stdio.h>

int main(void)
{
	char c = 'A';
	
	while (c <='Z')
	{
		printf("%c",  c);
		c += 1;
	}
	printf("\n");
	
	return 0;
}
