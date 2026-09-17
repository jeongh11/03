#include <stdio.h>

int main(void)
{
    float a;
    float b;

    float division;

    printf("분자를 입력하세요: ");
    scanf("%f", &a);

    printf("분모를 입력하세요: ");
    scanf("%f", &b);

    division = a/b;

    printf("나누기의 결과는 %f 입니다.", division);

    return 0;
}
