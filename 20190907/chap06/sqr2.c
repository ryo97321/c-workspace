#include <stdio.h>

int main(void)
{
    double x;

    printf("�����l����͂��� : ");
    scanf("%lf", &x);

    printf("���̐��̂Q���%.3f�ł��B\n", sqr(x));

    return 0;
}

double sqr(double x)
{
    return x * x;
}