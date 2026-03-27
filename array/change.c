#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int price, money, change, a, b, c;
	change = 0;
	printf("물건값을 입력해주세요: ");
	scanf("%d", &price);
	printf("투입금액을 입력해주세요: ");
	scanf("%d", &money);
	change = money - price;
	
		a = change / 5000;
		change = change % 5000;
		b = change / 1000;
		change = change % 1000;
		c = change / 100;
		change = change % 100;
	

	printf("남은 금액은 %d입니다.\n", change);
	printf("5천원은 %d\n천원권은 %d\n100원은 %d입니다", a, b, c);
	return 0;
}