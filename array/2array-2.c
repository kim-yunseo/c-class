#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char menu[5][10] = { //5행 10열(0~4행 0~9열)
        "init",          //1행씩 초기값 설정
        "open",
        "close",
        "read",
        "write"
    };

    for (i = 0; i < 5; i++)
        printf("%d 번째 메뉴: %s \n", i, menu[i]); //i는 행을 의미, 열 생략

    return 0;
}