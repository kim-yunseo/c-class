#include <stdio.h>
int main()
{
	/*int i, cnt = 0;
	for (i = 1;i <= 100;i++) //i는 1부터 100까지 1씩증가
	{
		if (i % 3 == 0 && i % 7 == 0)//i가 3의 배수이고 7의 배수이면 숫자*를 출력
		{
			printf("%d*", i);
		}
	}*/

	int i;
	for (i = 0;i < 10;i++) //i는 0부터 9까지 1씩증가
	{
		if (i % 3 == 0) continue; //i가 3의 배수이면 내려가지 않고 for문으로
		if (i > 5) break;         //i가 5보다 커지면 멈춤
		printf("%d", i);
	}
	

	return 0;
}