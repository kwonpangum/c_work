#include <stdio.h>
#include <string.h>


int main (void) 
{
	char *str1 = "Hello";
	char str2[6];
	
	strcpy(str2, str1);
	
	if (strcmp(str1, str2) ==0) {
		printf("Equal\n");
	} else {
		printf("Not Equal\n");
	}
	
	char *title = "just the way you are";
	char *singer = "billy joel";
	
	char result[100];
	strcpy(result, title);
	strcat(result, "-");
	strcat(result, singer);
	
	printf("%s %ld\n", result, strlen(result));
	 
	return 0;
}
