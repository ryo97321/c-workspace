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

    printf("名前を入力してください : ");
    scanf("%s", name);

    printf("よろしいですか (Y / N) : ");
    ch = kakunin();
    if(ch == 'Y' || ch == 'y') {
        printf("こんにちは%sさん。\n", name);
    }

    return 0;
}