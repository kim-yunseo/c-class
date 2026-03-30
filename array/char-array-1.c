#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main(void)
{
	char str[30] = "C language";    //문자배열 30자
	int i = 0;

	while (str[i] != '\0')          //\0(null)값, 문자열 내용이 끝나는 시점에 null이 들어감
		i++;
	printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
	int a;
	char menu[5][10] = { "int","open","close","read","write" };
	for (a = 0; a < 5;a++)
		printf("%d 번째 메뉴: %s\n", a,menu[a]);
	return 0;
}