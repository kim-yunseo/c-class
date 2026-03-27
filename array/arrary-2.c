#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5//기호상수, STUDENTS(무조건 대문자)=5
int main(void)
{
	int score[STUDENTS];   //5개
	int sum = 0, cnt=0;
	float avg;
	for (int i = 0;i <= 4;i++) 
	{
		printf("성적을 입력해 주세요: ");
		scanf("%d", &score[i]);
		if (score[i] >= 0 && score[i] <= 100) //0보다 크고 100보다 작으면
		{
			sum = sum + score[i];             //sum에다 성적을 더하고
			if (score[i] != 0)
			{
				cnt += 1;                     //평균 구할때 명수를 더한다
			}
		}
		else                                  //아니면
		{

			score[i] = 0;                     //입력받은 값을 0으로 바꾸고
			i--;                              //반복횟수를 마이너스 일을 한다
			continue;                         //위로 올라간다
		}
	}
	avg = sum / (float)cnt;
	//avg = sum / 5.; //5. = 실수 계산
	printf("성적의 합계는 %d입니다\n", sum);
	printf("성적의 평균은 %.2f입니다\n", avg);


	return 0;
}