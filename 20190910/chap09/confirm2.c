#include <stdio.h>

int main(void)
{
    int ch;
    char name[20];

    printf("���O����͂��Ă������� : ");
    scanf("%s", name);

    printf("��낵���ł��� (Y / N) : ");
    fflush(stdin);
    ch = getchar();

    if(ch == 'Y' || ch == 'y') {
        printf("����ɂ���%s����B\n", name);
    }

    return 0;
}