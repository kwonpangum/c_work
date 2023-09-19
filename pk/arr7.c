#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch[20] = "apple";
	printf("%s\n", ch);
	
	strcpy(ch, "banana");
	printf("%s\n", ch);

	return 0;
}
