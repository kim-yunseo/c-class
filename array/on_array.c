#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, sum;
	float e;
	sum = 0;
	printf("점수를 입력하세요: ");
	scanf("%d", &a);
	printf("점수를 입력하세요: ");
	scanf("%d", &b);
	printf("점수를 입력하세요: ");
	scanf("%d", &c);
	sum = a + b + c;
	e = (float)sum / 3;
	printf("3명의 점수의 합계는 %d입니다.\n",sum);
	printf("3명의 점수의 평균은 %.2f입니다.", e);

	return 0;
}