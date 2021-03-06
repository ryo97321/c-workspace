#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int human;
    int comp;
    int judge;
    int retry;

    srand(time(NULL));

    printf("じゃんけんゲーム開始!!\n");

    do {
        comp = rand() % 3;

        do {
            printf("\n\aじゃんけんポン...(0)グー (1)チョキ (2)パー : ");
            scanf("%d", &human);
        } while(human < 0 || human > 2);

        printf("私は");

        switch(comp) {
            case 0: printf("グー");     break;
            case 1: printf("チョキ");   break;
            case 2: printf("パー");     break;
        }

        printf("です。\n");

        judge = (human - comp + 3) % 3;

        switch(judge) {
            case 0: puts("引き分けです。");     break;
            case 1: puts("あなたの負けです。");  break;
            case 2: puts("あなたの勝ちです。");  break;
        }

        printf("もう一度しますか？ (0)いいえ (1)はい : ");
        scanf("%d", &retry);
    } while(retry == 1);

    return 0;
}