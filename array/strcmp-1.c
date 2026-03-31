#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <string.h>
int main()
{
	char a[30];
	char b[30];
	int res;        //결과가 숫자로 나오기 때문에 int로 선언한다.
	printf("첫번째 단어를 입력해주세요: ");
	scanf("%s", a); //배열명은 배열명 자체가 첫 주소이기 때문에 &를 안붙인다.
	                //만약에 요소를 받을 때는 &를 붙인다.
	printf("두번째 단어를 입력해주세요: ");
	scanf("%s", b);
	strcmp(a, b);   //문자열비교
	res = strcmp(a, b);
	// res는 0, 음수, 양수
	if (res < 0)
		printf("%s가 %s보다 앞에 있습니다\n.", a, b); //음수이면 a가 b보다 사전순으로 앞에 있음
	else if (res == 0)
		printf("%s가 %s와 같습니다.\n", a, b);        //반환값이 0이면 완전히 같다.
	else
		printf("%s가 %s보다 뒤에 있습니다\n", a, b);  //양수이면 a가 b보다 사전순으로 뒤에 있음

	return 0;
}