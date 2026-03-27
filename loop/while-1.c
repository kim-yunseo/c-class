#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*int i = 1;
	while (i <= 5) //i가 5와 같거나 작을 때 반복 
	{
		printf("%d\n", i);
		i = i + 1; // 혼합연산자 i+=1, i++
	}*/

	//int i = 2; //1~100 변수
	//int sum = 0; //합계 변수
	//while (i <= 100)
	//{ 
	//	sum = sum + i;
	//	i=i+2;
	//}
	//printf("짝수의 합은:%d", sum);

	int num, i = 0;
	printf("양의 정수 입력: ");
	scanf("%d", &num);
	while (i < num) //입력한 숫자와 같아지면 탈출
	{
		printf("handaman!\n");//입력한 숫자만큼 출력(0부터 시작)
		i++;
	}
	return 0;
}