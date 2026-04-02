#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_even(int ar[10]);
void print_cnt(int res);
int main()
{
	int ar[10],res;
	printf("정수 10개를 입력하세요: ");
	for (int i = 0;i < 10;i++)
	{
		scanf("%d", &ar[i]);
	}
	res=count_even(ar);        //함수호출
	print_cnt(res);
	return 0;
}

int count_even(int ar[10]) //10은 생략가능, 함수앞에 반환되는 자료형
//배열은 주소가 배열의 이름이기 때문에 main의 ar배열과 count_even의 ar배열 주소가 같다
{
	int cnt=0;
	for (int j = 0;j < 10; j++)
	{
		if (ar[j] % 2 == 0)
		{
			cnt += 1;  //짝수이면 1증가
		}
	}
	return cnt; //반환되는 값 (짝수개수)
}

void print_cnt(int res) //이름은 달라도 가능
{
	printf("%d", res);
}
