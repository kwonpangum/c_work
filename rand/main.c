#include <stdio.h>
#include <time.h>  // <> user 밑에 라이브러리.
#include "rand.h" //  "" 같은 폴더 안에 있음.

int main (void)
{	
	my_srand(time(NULL));
	
	for (int i = 1; i <=10; ++i) {
		int num = my_rand();
		printf("num : %d\n", num);
	}
	return 0;
}

