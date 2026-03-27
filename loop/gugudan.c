#include <stdio.h>
int main()
{
	int i;   //변수(단)
	int j;   //변수(곱하는 수)
	//중복 for : 박의 for 1번 -안쪽 for전부
	for (i = 1;i <= 12;i=i+3)                             //단/ i가 3씩 12까지 증가
	{        //4번 반복
		printf("%d단\t\t%d단\t\t%d단\n",i,i+1,i+2);       //i단 이름, 한줄에 3단

		for (j = 1;j <= 9;j++)                            //곱하는 수/ j가 1씩 9까지 증가
		{    //"9번" 반복
			printf("%d * %d = %2d\t", i, j, i * j);       //첫번째 단 출력
			printf("%d * %d = %2d\t", i+1, j, (1+i) * j); //두번째 단 출력
			printf("%d * %d = %2d\n", i+2, j, (2+i) * j); //세번째 단 출력
		}

		printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}