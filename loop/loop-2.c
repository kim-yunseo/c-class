#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	/*int a;
	int sum = 0;
	int i;
	printf("정수를 입력하세요: ");
	scanf("%d", &a);
	for (i = 1;i <= a;i++)
	{
		sum = sum + i; // sum+=i;
	}
	printf("합계 %d", sum);*/

	//int b;                     //입력받을 변수(단)
	//int i;                     //1~9
	//printf("원하는 단은? ");
	//scanf("%d", &b);          // 단 입력
	//for (i = 1;i <= 9;i++)    //i의 초기값1, 
	//					      //9와 같을 때까지 1씩 더하며 반복
	//{
	//	printf("%d * %d = %d\n", b, i, b * i); //결과 출력
	//}

	int i;
	int j;
	for (i=2;i<=9;i++)          //i는 단을 의미, i는 j가 반복이 끝나면 증가
		for (j = 1;j <= 9;j++)  //곱하는 수 1~9, 초기값에 변수 선언 가능
		{
			printf("%d * %d = %d\n", i, j, i * j); //결과, %nd는 n자리수(오른쪽정렬)
		}                                          //-nd는 왼쪽정렬
	
	
	
	return 0;
}