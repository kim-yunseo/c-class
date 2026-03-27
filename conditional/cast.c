#include <stdio.h>
int main()
{
	int z;
	z = sizeof(int) + sizeof(char); //int=4byt char=1byt
	printf("%d", z);
	

	int a = 7 + 6;
	int b = (int)7.3 + (int)6.7; //소수점 버림
	printf("%d %d", a, b);

	float t;
	t = 10 / 3; //정수로 인식
	printf("%f", t); //정수 나누기 정수는 정수
	t = (float)10 / 3;
	printf("%f", t);
	return 0;
}