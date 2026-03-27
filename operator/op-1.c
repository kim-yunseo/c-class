#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5 % 3;
	a--;
	b = (a++) + 3;
	printf("%d, %d\n", a, b);
	c = (++a) + 3;
	printf("%d, %d, %d", a, b, c);
	
	int num1 = 16, num2 = 44;
	int f = num1++; // a에 16을 대입 후 num에 1추가
	int g = --num2; // num에 1을 빼고 b에 대입
	printf("%d", f + g); // a=16 b=43 총:59

	int val1 = 10, val2 = 12;
	int result1, result2, result3;
	result1 = (val1 == 10 && val2 == 12); //참 1
	result2 = (val1 < 12 || val2>12);     //참 1
	result3 = (!val1);                    // 0이외의 것이 참이므로 0
	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2);
	printf("result3: %d\n", result3);


	return 0;
}