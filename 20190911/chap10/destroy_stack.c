#include <stdio.h>

void func(void)
{
    int i;
    char x[5];

    puts("関数funcの実行中です。");
    for(i = -2; i < 8; i++)
        x[i] = 0;
}

int main(void)
{
    puts("関数funcを呼び出します。");
    func();
    puts("関数funcから戻ってきました。");

    return 0;
}