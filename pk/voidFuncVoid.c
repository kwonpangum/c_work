#include <stdio.h>

void print_line(void);

int main (void) 
{
	print_line();
	printf("학번 	이름		전공		학점\n");
	print_line();
	
	return 0;
}

void print_line(void)
{
	for (int i=0; i<44; ++i) {
		printf("-");
	}
	printf("\n");
}
