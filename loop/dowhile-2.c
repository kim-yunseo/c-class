#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i = 0;
	do 
	{
		printf("1:새로만들기 2:파일열기 3:파일닫기\n");
		scanf("%d", &i);
		switch (i) {
		case 1:
			printf("새로만들기\n");
			break;
		case 2:
			printf("파일열기\n");
			break;
		case 3:
			printf("파일닫기\n");
			break;
		}
		
	} while (i<1||i>3);
	
	
	
	return 0;
}