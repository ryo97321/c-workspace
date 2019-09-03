#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;

    x = calloc(1, sizeof(int));

    if(x == NULL)
        printf("記憶域の確保に失敗しました\n");
    else {
        printf("整数値を入力してください : ");
        scanf("%d", x);
        printf("あなたは%dと入力しましたね。\n", *x);
        free(x);
    }

    return 0;
}