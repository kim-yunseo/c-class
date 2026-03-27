#include <stdio.h>
int main()
{
	char ch;
	printf("문자를 입력하세요: ");
	//scanf_s("%c", &ch);
	ch = getchar();                  //한 글자를 입력받음
	//문자를 숫자로 기억하기 때문에 대소 비교 가능
	if (ch >= 'A' && ch <= 'Z')      //65~90 영어 대문자 코드
		//(ch >= 65 && ch <= 90)
		printf("대문자입니다.");
	else if (ch >= 'a' && ch <= 'z') //97~122 영어 대문자 코드
		//(ch >= 97 && ch <= 122)
		printf("소문자입니다");
	else if (ch >= '0' && ch <= '9') //48~57 영어 대문자 코드
		//(ch >= 48 && ch <= 57)
		printf("숫자입니다");
	else
		printf("그 외 문자입니다");
	
	
	return 0;
}