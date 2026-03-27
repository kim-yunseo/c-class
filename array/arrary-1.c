#include <stdio.h>
int main(void)
{
	int num[5] = { 10,20,30,40,50 };
	int num2[] = { 10,20,30 }; //묵시적 배열:3개, []->3이 생략(갯수)
	printf("%d\n", num[2]); //30이 출력된다. 0부터 시작

	int num3[5] = { 1,2 }; // 1,2,0,0,0
	int num4[5] = { 4 };   // 4,0,0,0,0
	int num5[5] = { 0 };   // 0,0,0,0,0

	int num6[5];
	num6[0] = 100;
	num6[1] = 200;
	num6[2] = 300;
	num6[3] = 400;
	num6[4] = 500;
	/*printf("%d\n", num6[0]);
	printf("%d\n", num6[1]);
	printf("%d\n", num6[2]);
	printf("%d\n", num6[3]);
	printf("%d\n", num6[4]);*/
	for (int i = 0;i <= 4;i++)
		printf("%d\n", num6[i]); //배열 요소값 출력


	return 0;
}