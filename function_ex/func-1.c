#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int a, int b);     //함수원형,;붙임
int Input(void);           //main밑에 있는 함수를 알려주기 위해 사용
void Result_Print(int val);
void Intro(void);

int main() //시작
{
	int a, b, result;
	Intro();               //함수 호출, ()안에 인수가 없음
	//함수 앞에 형이 없음 = 반환되는 것이 없음
	a = Input();           //함수 호출, a에 함수값을 대입
	b = Input();           //b에 함수값을 대입
	result = Add(a, b);    //인수 있음(정수형 a,b)
	//앞에서 변수선언을 했기때문에 형 선언x
	Result_Print(result);  //인수 있음(정수형 result)
	return 0;
}

void Intro(void)                   //1번, ()안에 매개변수가 없음
//반환되는 값이 없음(void)
{
	printf("******START******\n"); //제목 출력 부분
	printf("두 개의 정수 입력: \n");
}
int Input(void)                    //2번 3번, 사용자 정의 함수
//int는 반환되는 값의 형 의미
{
	int input;                     //변수 선언
	scanf("%d", &input);           //정수형 숫자 입력 부분
	return input;                  //값을 반환(정수)

}
int Add(int i, int j)              //4번 매개변수(형 선언), a->i b->j
{
	return i + j;                  //더한값을 반환(int)
}
void Result_Print(int val)         //5번 result->val(매개변수)
{
	printf("덧셈에 대한  결과: %d \n",val);
	printf("*******END*******");
	//반환되는 값이 없음(void)
}
