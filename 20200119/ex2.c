#include <stdio.h>
#include <string.h>

#define ROW_NUM 50      // �s��
#define COL_NUM 100     // ��

int main(void) {
    int a[50][100];

    int user_select;            // �s:1, ��:0
    int user_input_row = 0;     // ���[�U�����͂����s�ԍ�
    int user_input_col = 0;     // ���[�U�����͂�����ԍ�
    int row_sum = 0;            // �Ƃ���s�̍��v�l
    int col_sum = 0;            // �Ƃ����̍��v�l
    double average;             // ���ϒl

    // a�̊e�v�f���v�Z
    for(int j=0; j<=ROW_NUM; j++) {
        for(int i=0; i<=COL_NUM; i++) {
            a[j][i] = (i * 23 + j * 7) % 256;
        }
    }

    // �s���񂩑I��
    do {
        printf("�s�̂Ƃ���1, ��̂Ƃ���0����͂��Ă������� : ");
        scanf("%d", &user_select);
    } while(user_select != 0 && user_select != 1);

    if(user_select == 1) {              // �s�I����

        // �s�ԍ������
        do {
            printf("�s�ԍ� : ");
            scanf("%d", &user_input_row);
        } while(user_input_row > ROW_NUM || user_input_row < 0);

        // �s�̕��ϒl���v�Z
        for(int i=0; i<COL_NUM; i++) {
            row_sum += a[user_input_row][i];
        }
        average = (double)row_sum / (double)ROW_NUM;

    } else if(user_select == 0) {       // ��I����

        // ��ԍ������
        do {
            printf("��ԍ� : ");
            scanf("%d", &user_input_col);
        } while(user_input_col > COL_NUM || user_input_col < 0);

        // ��̕��ϒl���v�Z
        for(int j=0; j<ROW_NUM; j++) {
            col_sum += a[j][user_input_col];
        }
        average = (double)col_sum / (double)COL_NUM;

    }

    // ���ϒl��\��
    printf("���ϒl : %.2f\n", average);

    return 0;
}