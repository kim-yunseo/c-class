#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int i;
	char fruits[3][20];
	for (i = 0;i <= 2;i++) 
	{
		printf("과일 이름을 입력하세요: ");
		scanf("%s", &fruits[i]);
		printf("%d번째 과일은: %s \n", i, fruits[i]);
	}

	return 0;
}

