#include <stdio.h>

void fruit (int count);

int main (void) 
{
	
	fruit(3);

	return 0;
}

void fruit (int count)
{
	for (int i=0; i<count; ++i)
	{
		printf("apple\n");
	}
}
