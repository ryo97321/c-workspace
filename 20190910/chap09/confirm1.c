#include <stdio.h>

int main(void)
{
    int ch;
    char name[20];

    printf("���O����͂��Ă������� : ");
    scanf("%s", name);

    printf("��낵���ł����iY/N�j: ");

    ch = getchar();
    printf("ch = %x\n", ch);

    if(ch == 'Y' || ch == 'y') {
        printf("����ɂ���%s����B\n", name);
    }

    return 0;
}