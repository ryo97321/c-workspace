#include <stdio.h>

int main(void)
{
    int ch;
    char name[20];

    printf("名前を入力してください : ");
    scanf("%s", name);

    printf("よろしいですか (Y / N) : ");
    fflush(stdin);
    ch = getchar();

    if(ch == 'Y' || ch == 'y') {
        printf("こんにちは%sさん。\n", name);
    }

    return 0;
}