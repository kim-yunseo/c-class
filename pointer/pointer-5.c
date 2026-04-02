#include <stdio.h>
int Add(int a, int b);
void sub(int a, int b);
int main(void)
{
	int a = 10, b = 20;

	int q=Add(a, b); //인수
	sub(a, b);
	printf("%d", q);
	return 0;
}

int Add(int a, int b)
{
	int k=0;
	k = a + b;
	return k;
}

void sub(int a, int b)
{
	int c=0;
	c = a - b;
	printf("%d\n", c);
}