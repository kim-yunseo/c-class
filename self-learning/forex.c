#include <stdio.h>
int main()
{
	int a[5] = { 9,1,7,3,5 };     //배열 이름[길이], 배열 선언
	int i, j, min, t;
	for (i = 0;i < 4;i++)         //i는 초기값 0에서 1씩 증가, 4번 반복
	{
		min = i;
		for (j = i + 1;j < 5;j++) //j는 초기값 1에서 1씩 증가, 4번 반복 
		{
			if (a[j] < a[min])
				min = j;          //배열 a의 j번째 값이 min번째 값보다 작으면 min을 j 값으로 변경
		}
		t = a[i];                 //a[i]와 a[min]의 값을 바꿈
		a[i] = a[min];            
		a[min] = t;
	}
	for (i = 0;i < 5;i++)         //5번 반복, 작은 수부터 순서대로 출력
	{
		printf("%2d", a[i]);
	}


}