#include <stdio.h>

double sqr(double x)
{
    return x * x;
}

int main(void)
{
    double x;

    printf("実数値を入力せよ : ");
    scanf("%lf", &x);

    printf("その数の２乗は%.3fです。\n", sqr(x));

    return 0;
}