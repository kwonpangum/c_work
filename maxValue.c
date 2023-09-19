#include <stdio.h>

void printStrs(char *str[], int size)
{
	for (int i=0; i<size; ++i) {
		printf("%s\n", str[i]);
	}
}

int main(void)
{
	char *cities[] = {
	"1", "2", "3", "4", "5"
	};
	printStrs(cities, 5);	
}
	
