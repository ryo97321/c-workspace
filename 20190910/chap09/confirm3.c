#include <ctype.h>
#include <stdio.h>

int kakunin(void)
{
    int ch;

    while (isspace(ch = getchar()) && ch != EOF)
        ;
    return ch;
}

int main(void)
{
    int ch;
    char name[20];

    printf("���O����͂��Ă������� : ");
    scanf("%s", name);

    printf("��낵���ł��� (Y / N) : ");
    ch = kakunin();
    if(ch == 'Y' || ch == 'y') {
        printf("����ɂ���%s����B\n", name);
    }

    return 0;
}