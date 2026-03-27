#include <stdio.h>
int main()
{
	int a = 10;
	printf("%d\n", a++); //후위 증가, a가 출력된 후 1이 증가, 10
	printf("%d\n", ++a); //전위 증가, a가 1이 증가된 후 출력, 12
	printf("%d\n", a--); //후위 감소, a가 출력된 후 1이 감소, 12
	printf("%d\n", --a); //전위 감소, a가 1이 감소된 후 출력, 10
	
	
	return 0;
}