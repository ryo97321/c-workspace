#include <stdio.h>

int add(x, y)
int x, y;
{
    return x + y;
}

main()
{
    int x, y;

    printf("整数値を入力せよ : ");  scanf("%d", &x);
    printf("整数値を入力せよ : ");  scanf("%d", &y);

    printf("それらの和は%dです。\n", add(x, y));
}