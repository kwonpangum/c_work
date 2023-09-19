#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) // count, vector
{
	printf("argc: %d\n", argc);
	
	for (int i=0; i < argc; ++i) {
		printf("argv[%d] : %s\n", i, argv[i]);
	}
	
	if (argc != 3) {
		fprintf(stderr, "[usage] ./add 100, 200\n");
	}
	
	int a = atol(argv[1]);
	int b = atol(argv[2]);
	
	printf("%d\n", a+b);
	return 0;
}

