#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main()
{
	//getchar() : 하나의 문자를 받아서 반환한다
	//getchar() : 하나의 문자를 받아서 반환한다
	//gets()    : 하나의 문자열을 읽어서 문자배열에 저장한다
	//puts()    : 문자배열에 저장되어 있는 한 줄의 문자열을 출력한다
	
	char ch;
	printf("문자 1개 입력: ");
	ch = getchar();//문자 1개 입력
	printf("입력한 문자: \n");
	putchar(ch);   //문자 1개 출력
	printf("\n");

	while (getchar() != '\n');
	//엔터가 나올 때까지 버퍼에서 문자를 꺼내서 버립니다.
	char name[50];
	char address[100];

	printf("\n이름을 입력해주세요: \n");
	gets(name);     //한 단어 이상 한줄을 입력받을 때 사용

	printf("현재 거주하는 주소를 입력하세요: ");
	gets(address);

	puts(name);     //문자열 한 줄 출력
	puts(address);


}