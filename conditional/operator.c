#include <stdio.h>

int main()
{
    int res1,num1,num2;
    double res2;
    char op,a;

    while (1)                                    //반복문
    {
        printf("첫번째 숫자를 입력하세요:  \n");
        scanf_s("%d",&num1);
        printf("연산자를 입력하세요(+ - * /):  \n");
        scanf_s(" %c",&op);
        printf("두번째 숫자를 입력하세요:  \n");
        scanf_s("%d", &num2);

        switch (op)                              //연산자 계산
        {

        case '+':
            res1 = num1 + num2;
            break;

        case '-':
            res1 = num1 - num2;
            break;

        case '*':
            res1 = num1 * num2;
            break;

        case '/':
            res2 = (double)num1 / num2;
            break;
        }

        if (op == '+' || op == '-' || op == '*') //연산자 프린트(나누기 제외), or(하나만 만족)
            printf("연산의 결과는 %d 입니다\n",res1);
        else if (op == '/')                      //나누기 프린트
            printf("연산의 결과는 %.2f 입니다\n",res2);
        else
            printf("오류입니다\n");

        printf("연산을 종료하시겠습니다까?(Y,N)\n");
        scanf_s(" %c",&a);                      //반복여부 입력
        if (a == 'Y' || a == 'y')               //y입력시 종료
            break;
    }
    return 0;
}