#include <stdio.h>

double pow(double, double);

int main(void)
{
    double x;

    printf("実数値を入力せよ : ");
    scanf("%lf", &x);

    printf("その数の３乗は%.3fです。\n", pow(x, 3));

    return 0;
}