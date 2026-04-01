#include <stdio.h>
int digit(int n)             //사용자 정의 함수 선언,매개변수 n
{
	if (n < 10) return n;    //n이 10보다 작으면 반환
	return (n % 10) + digit(n / 10);
	//(n % 10): 현재 숫자의 가장 마지막 자릿수(나머지), digit(n / 10): 마지막 자릿수를 제외한 나머지 숫자(몫)
}
int main()
{
	printf("%d", digit(235)); //인수 235, 인수를 가지고 계산한 값이 출력
}

