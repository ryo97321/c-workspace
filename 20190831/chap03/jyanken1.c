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

    printf("����񂯂�Q�[���J�n!!\n");

    do {
        comp = rand() % 3;

        printf("\n\a����񂯂�|��...(0)�O�[ (1)�`���L (2)�p�[ : ");
        scanf("%d", &human);

        printf("����");
        switch(comp) {
            case 0: printf("�O�[");     break;
            case 1: printf("�`���L");   break;
            case 2: printf("�p�[");     break;
        }
        printf("�ł��B\n");

        judge = (human - comp + 3) % 3;

        switch(judge) {
            case 0: puts("���������ł��B");         break;
            case 1: puts("���Ȃ��̕����ł��B");     break;
            case 2: puts("���Ȃ��̏����ł��B");     break;
        }

        printf("������x���܂����H...(0)������ (1)�͂� : ");
        scanf("%d", &retry);
    } while(retry == 1);

    return 0;
}