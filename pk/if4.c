#include <stdio.h>

int main (void) 
{
	int chest = 95;
	char size;
	
	// chest >=100 L
	if (chest > 100) {
		size = 'L';
	} else if (90 < chest && chest <=100) {
		size = 'M';
	} else {
		size = 'S';
	}
	
	printf("%c\n", size);
	return 0;
}
