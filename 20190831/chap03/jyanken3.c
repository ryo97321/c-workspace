#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int human;
    int comp;
    int judge;
    int retry;
    char *hd[] = {"�O�[", "�`���L", "�p�["};

    srand(time(NULL));

    printf("����񂯂�Q�[���J�n!!\n");

    do {
        comp = rand() % 3;

        do {
            printf("\n\a����񂯂�|�� ...");
            for(i = 0; i < 3; i++)
                printf(" (%d)%s", i, hd[i]);
            printf(" : ");
            scanf("%d", &human);
        } while(human < 0 || human > 2);

        printf("����%s��, ���Ȃ���%s�ł��B\n", hd[comp], hd[human]);

        judge = (human - comp + 3) % 3;

        switch(judge) {
            case 0: puts("���������ł��B"); break;
            case 1: puts("���Ȃ��̕����ł��B"); break;
            case 2: puts("���Ȃ��̏����ł��B"); break;
        }

        printf("������x���܂���... (0)������ (1)�͂� : ");
        scanf("%d", &retry);
    } while(retry == 1);

    return 0;
}