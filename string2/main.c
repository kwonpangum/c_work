#include <stdio.h>
#include <string.h>
#include "string.h"

int main (void) 
{
	char *str1 = "Hello";
	char str2[6];
	
	printf("%d\n", my_strlen(str1));
	
	strcpy(str2, str1);
	
	if (my_strcmp(str1, str2) ==0) {
		printf("Equal\n");
	} else {
		printf("Not Equal\n");
	}
	
	char *title = "just the way you are";
	char *singer = "billy joel";
	char result[100];
	my_strcpy(result, title);
	my_strcat(result, "-");
	my_strcat(result, singer);
	
	printf("%s\n", result);
	 
	return 0;
}
