#include <stdio.h>

void print_chr(char ch, int i);

int main (void) 
{
	print_chr('G', 5);
	
	return 0;
}

void print_chr(char ch, int count)
{
	for(int i=0; i<count; ++i) 
	{
		printf("%c", ch);	
	}
	printf("\n");
}
