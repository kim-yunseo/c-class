#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int pass = 1234;
	int pw = 0;
	while (pw != pass)
	{
		printf("암호를 입력하세요: ");
		scanf("%d", &pw);
	}
	printf("로그인 성공");

}