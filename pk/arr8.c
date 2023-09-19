#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch[20] = "apple";
	char ch2[20] = "banana";
	
	strcpy(ch, ch2);
	printf("%s\n", ch);
	
	return 0;
}
