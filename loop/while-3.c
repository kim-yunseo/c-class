#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int num;
	int i = 1;
	printf("출력하고 싶은 단은?");
	scanf("%d", &num);
	while (i <= 9)
	{
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}
	
	
	
	
	return 0;
}