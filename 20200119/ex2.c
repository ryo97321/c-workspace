#include <stdio.h>
#include <string.h>

#define ROW_NUM 50      // 行数
#define COL_NUM 100     // 列数

int main(void) {
    int a[50][100];

    int user_select;            // 行:1, 列:0
    int user_input_row = 0;     // ユーザが入力した行番号
    int user_input_col = 0;     // ユーザが入力した列番号
    int row_sum = 0;            // とある行の合計値
    int col_sum = 0;            // とある列の合計値
    double average;             // 平均値

    // aの各要素を計算
    for(int j=0; j<=ROW_NUM; j++) {
        for(int i=0; i<=COL_NUM; i++) {
            a[j][i] = (i * 23 + j * 7) % 256;
        }
    }

    // 行か列か選択
    do {
        printf("行のときは1, 列のときは0を入力してください : ");
        scanf("%d", &user_select);
    } while(user_select != 0 && user_select != 1);

    if(user_select == 1) {              // 行選択時

        // 行番号を入力
        do {
            printf("行番号 : ");
            scanf("%d", &user_input_row);
        } while(user_input_row > ROW_NUM || user_input_row < 0);

        // 行の平均値を計算
        for(int i=0; i<COL_NUM; i++) {
            row_sum += a[user_input_row][i];
        }
        average = (double)row_sum / (double)ROW_NUM;

    } else if(user_select == 0) {       // 列選択時

        // 列番号を入力
        do {
            printf("列番号 : ");
            scanf("%d", &user_input_col);
        } while(user_input_col > COL_NUM || user_input_col < 0);

        // 列の平均値を計算
        for(int j=0; j<ROW_NUM; j++) {
            col_sum += a[j][user_input_col];
        }
        average = (double)col_sum / (double)COL_NUM;

    }

    // 平均値を表示
    printf("平均値 : %.2f\n", average);

    return 0;
}