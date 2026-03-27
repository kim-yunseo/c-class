#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main(void)
{
	/*int a = 1;
	int b = 1;
	while (a <= 3) 
	{
		while (b <= 3) 
		{
			printf("%d %d\n", a,b);
			b++;
		}
		a++;
		b = 1; //b값 초기화
	}*/
	
	int i,j;
	for (i = 1;i <= 3;i++)
	{
		for (j = 1;j <= 3;j++)
		{
			printf("%d %d\n", i, j);
		}
	}


	
	return 0;
}