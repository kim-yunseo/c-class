#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int num, cnt = 0, i;

    printf("원하는 배수 입력: "); //i=3
    scanf("%d", &i);
    printf("배수의 개수 입력: "); //num=5
    scanf("%d", &num);

    while (cnt++ < num) //5일때 탈출(0부터 시작)
        printf("%d ", i * cnt);
    //cnt 0  3*1
    //cnt 1  3*2
    //cnt 2  3*3
    //cnt 3  3*4
    //cnt 4  3*5
}