#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 1
#define SCISSORS 2
#define PAPER 3
#define GAME_CNT 3

int main(int argc, char const *argv[]) {
    int user_input;
    int com_input;
    float points = 0;
    float winning_percentage;
    int i;

    for(i = 0; i < GAME_CNT; i++) {
        printf("%d回目 手を入力してください(グー:1 チョキ:2 パー:3) : ", i+1);
        scanf("%d", &user_input);

        srand((unsigned int)time(NULL));
        com_input = rand() % 3 + 1;

        switch(user_input) {
            case 1:
                if(com_input == 1) {
                    printf("コンピューター : グー\n");
                    printf("あいこ\n");
                    points += 0.5;
                } else if(com_input == 2) {
                    printf("コンピューター : チョキ\n");
                    printf("勝ち\n");
                    points += 1.0;
                } else if(com_input == 3) {
                    printf("コンピューター : パー");
                    printf("負け\n");
                }
                break;
            case 2:
                if(com_input == 1) {
                    printf("コンピューター : グー\n");
                    printf("負け\n");
                } else if(com_input == 2) {
                    printf("コンピューター : チョキ\n");
                    printf("あいこ\n");
                    points += 0.5;
                } else if(com_input == 3) {
                    printf("コンピューター : パー\n");
                    printf("勝ち\n");
                    points += 1.0;
                }
                break;
            case 3:
                if(com_input == 1) {
                    printf("コンピューター : グー\n");
                    printf("勝ち\n");
                    points += 1.0;
                } else if(com_input == 2) {
                    printf("コンピューター : チョキ\n");
                    printf("負け\n");
                } else if(com_input == 3) {
                    printf("コンピューター : パー\n");
                    printf("あいこ\n");
                    points += 0.5;
                }
                break;
            default:
                printf("1~3の数字を入力してください\n");
                continue;
        }
    }

    winning_percentage = points / GAME_CNT * 100;
    printf("勝ち点 : %3.1f 勝率 : %5.2f %% \n", points, winning_percentage);
    return 0;
}