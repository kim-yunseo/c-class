#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //#include: 전처리기 <stdio.h>입출력
#include <string.h> //문자열 함수를 사용하기 위한 헤더파일
int main()
{
	char a[10] = "Hello";
	printf("%s\n", a);
	printf("%c\n", a[0]);

	char b[10];
	/*b = "love";      //오류, 문자배열 선언이후 뒤에 초기화가 안됨
	b[0] = 'l';        //문자열이 아니라
	b[1] = 'o';        //문자이기 때문에 null값이 자동로 들어가지 않음
	b[2] = 'v';
	b[3] = 'e';*/
	strcpy(b, "love"); //문자열 복사(대상, 문자열)
	printf("%s", b);
	//strcpy 문자배열 선언이후 문자열을 복사할때



	return 0;
}