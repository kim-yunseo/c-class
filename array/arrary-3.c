#include <stdio.h>
int main()
{
	/*int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //a[행][열] 0~2행 0~2열 ->9개 요소 구성
	// 0행=1,2,3 1행=4,5,6 2헹=7,8,9
	int i, j;
	for (i = 0;i < 3;i++) //i 행 의미 0~2
	{
		for (j = 0;j < 3;j++) //j는 열 의미 0~2
			printf("%d\t", a[i][j]); //9번 출력
		//i =0 j=0 1 2
		//i =1 j=0 1 2
		//i =2 j=0 1 2
		printf("\n");
	}*/


	int b[4][3]={ {100,200,300},{10,0,0},{30,40,0} };
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", b[i][j]);
			sum += b[i][j];
		}
		printf("\n");
	}
	printf("%d", sum);
	return 0;
}