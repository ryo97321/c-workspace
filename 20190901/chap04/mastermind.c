#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void make4digits(int x[])
{
    int i, j, val;

    for(i = 0; i < 4; i++) {
        do {
            val = rand() % 10;
            for(j = 0; j < i; j++) {
                if(val == x[j])
                    break;
            }
        } while(j < i);
        x[i] = val;
    }
}

int check(const char s[])
{
    int i, j;

    if(strlen(s) != 4) {
        return 1;
    }

    for(i = 0; i < 4; i++) {
        if(!isdigit(s[i])) {
            return 2;
        }
        for(j = 0; j < i; j++) {
            if(s[i] == s[j]) {
                return 3;
            }
        }
    }

    return 0;
}

void judge(const char s[], const int no[], int *hit, int *blow)
{
    int i, j;

    *hit = *blow = 0;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(s[i] == '0' + no[j])
                if(i == j)
                    (*hit)++;
                else
                    (*blow)++;
        }
    }
}

void print_result(int snum, int spos)
{
    if(spos == 4)
        printf("�����ł�!!");
    else if(snum == 0)
        printf("    �����̐����͑S���܂܂�܂���B\n");
    else {
        printf("    �����̐�����%d�̐������܂܂�܂��B\n", snum);

        if(spos == 0)
            printf("    �������ʒu�������Ă��鐔���͂���܂���B\n");
        else
            printf("    ���̒���%d�͈ʒu�������Ă��܂��B\n", spos);
    }
    putchar('\n');
}

int main(void)
{
    int try_no = 0;
    int chk;
    int hit;
    int blow;
    int no[4];
    char buff[10];
    clock_t start, end;

    srand(time(NULL));

    puts("�� �}�X�^�[�}�C���h�����܂��傤�B");
    puts("�� �l�̐����̕��т𓖂ĂĂ��������B");
    puts("�� ���������������܂܂�邱�Ƃ͂���܂���B");
    puts("�� 4307�̂悤�ɘA�����ē��͂��Ă��������B");
    puts("�� �X�y�[�X�����Ȃǂ���͂��Ă͂����܂���B\n");

    make4digits(no);

    start = clock();

    do {
        do {
            printf("���͂��Ă������� : ");
            scanf("%s", buff);

            chk = check(buff);

            switch(chk) {
                case 1: puts("\a������ƂS�����œ��͂��Ă��������B");      break;
                case 2: puts("\a�����ȊO�̕�������͂��Ȃ��ł��������B");   break;
                case 3: puts("\a����̐����𕡐����͂��Ȃ��ł��������B");   break;
            }
        } while(chk != 0);

        try_no++;
        judge(buff, no, &hit, &blow);
        print_result(hit + blow, hit);
    } while(hit < 4);

    end = clock();

    printf("%d�񂩂���܂����B\n���v���Ԃ�%.1f�b�ł����B\n", try_no, (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}