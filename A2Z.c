# include <stdio.h>

int main(void)
{
	char c;
	printf("Input the charactrt what you want to know if A to Z or not.: ");
	scanf("%c", &c);
	
	int isChr = (c >= 'A' && c <= 'Z');
	
	printf("Character %c you input is %d.\n", c, isChr);
	
	return 0;
}
