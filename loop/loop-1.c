#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	/*int a = 1;
	int sum = 0;
	for (a = 1;a <= 10;a=a+2) 
	{
		sum = sum + a;
	}
	printf("1~10까지 홀수 누적의 합%d", sum);*/

	int c = 1;
	int d = 0;
	while (c <= 10) 
	{
		d += c;
		c = c + 2;
	}
	printf("합은 %d\n", d);
	
	
	return 0;
}