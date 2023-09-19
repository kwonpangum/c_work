#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	char tmp[80];
	
	printf("두 문자열 입력 : ");
	scanf("%s %s", str1, str2);
	printf("두 문자열 출력 : %s %s\n", str1, str2);
	
	strcpy(tmp, str1);
	strcpy(str1, str2);
	strcpy(str2, tmp);
	
	printf("바뀐 두 문자열 출력 : %s %s\n", str1, str2);

	return 0;
}
