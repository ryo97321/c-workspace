#include <ctype.h>
#include <stdio.h>

int getnschar(void)
{
    int ch;
    while(isspace(ch = getchar()) && ch != EOF)
        ;
    return ch;
}

int kakunin(void)
{
    int ch;

    while((ch = getnschar()) != EOF) {
        if (ch == 'Y' || ch == 'y') return 1;
        if (ch == 'N' || ch == 'n') return 0;
    }

    return EOF;
}

int main(void)
{
    int ch;
    char name[20];

    printf("名前を入力してください : ");
    scanf("%s", name);

    printf("よろしいですか (Y / N) : ");
    ch = kakunin();
    if(ch == 1) {
        printf("こんにちは%sさん。\n", name);
    }

    return 0;
}