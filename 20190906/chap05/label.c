#include <stdio.h>

void sumup(int no)
{
    int sum = 0;

    printf("%d個の整数を入力してください。\n", no);
    puts("999を入力すると中断します。");

    while(no--) {
        int x;
        scanf("%d", &x);
        if(x == 999) goto xyz;
        sum += x;
    }
    printf("合計は%dです。\n", sum);
xyz:
    ;
}

int main(void)
{
    sumup(5);

    return 0;
}