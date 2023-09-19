# include <stdio.h>

int main(void)
{
	char c;
	printf("Input the charactrt what you want to know if A to Z or not.: ");
	scanf("%c", &c);
	
	if (c >='A' && c <='Z') {
		printf("Character %c is big letter.\n", c);
		
	}
	
	
	return 0;
}
