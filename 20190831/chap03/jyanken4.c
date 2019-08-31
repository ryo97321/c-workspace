#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int human;
int comp;
int win_no;
int lose_no;
int draw_no;

char *hd[] = {"�O�[", "�`���L", "�p�["};

void initialize(void)
{
    win_no = 0;
    lose_no = 0;
    draw_no = 0;

    srand(time(NULL));

    printf("����񂯂�Q�[���J�n!!\n");
}

void jyanken(void)
{
    int i;

    comp = rand() % 3;

    do {
        printf("\n\a����񂯂�|��...");
        for(i = 0; i < 3; i++)
            printf(" (%d)%s", i, hd[i]);
        printf(" : ");
        scanf("%d", &human);
    } while(human < 0 || human > 2);
}

void count_no(int result)
{
    switch(result) {
        case 0: draw_no++; break;
        case 1: lose_no++; break;
        case 2: win_no++;  break;
    }
}

void disp_result(int result)
{
    switch (result) {
        case 0: puts("���������ł��B"); break;
        case 1: puts("���Ȃ��̕����ł��B"); break;
        case 2: puts("���Ȃ��̏����ł��B"); break;
    }
}

int confirm_retry(void)
{
    int x;

    printf("������x���܂���...(0)������ (1)�͂� : ");
    scanf("%d", &x);

    return x;
}

int main(void)
{
    int judge;
    int retry;

    initialize();

    do {
        jyanken();

        printf("����%s��, ���Ȃ���%s�ł��B\n", hd[comp], hd[human]);

        judge = (human - comp + 3) % 3;

        count_no(judge);

        disp_result(judge);

        retry = confirm_retry();
    } while(retry == 1);

    printf("%d��%d�s%d�����ł����B\n", win_no, lose_no, draw_no);

    return 0;
}