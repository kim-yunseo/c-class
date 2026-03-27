#include <stdio.h>
int main()
{
	/*int a = 8, b = 10, c;
	if (a++ >= b--) //8>=10 거짓
		c = a - b;
	else
		c = a + b; //9+9=18
	printf("a=%d\n", a);
	printf("b=%d\n",b);
	printf("c=%d",c);*/

	int num1 = 16, num2 = 80;
	printf("%d", num1 > num2 ? num1 & num2 : num1 ^ num2); //거짓 :뒤에 실행
	return 0;
}