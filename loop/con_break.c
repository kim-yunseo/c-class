#include <stdio.h>
int main()
{
	for (int i=1;i <= 10;i++) 
	{
		if (i%7==0) 
		{
			//break;
			continue; //아래문장으로 내려가지 않고 다시 
		}             //반복문의 조건으로 올라가서 물어보고 반복
		printf("%d\n", i);
	}

	

	return 0;
}