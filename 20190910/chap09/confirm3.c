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

    printf("–¼‘O‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ : ");
    scanf("%s", name);

    printf("‚æ‚ë‚µ‚¢‚Å‚·‚© (Y / N) : ");
    ch = kakunin();
    if(ch == 'Y' || ch == 'y') {
        printf("‚±‚ñ‚É‚¿‚Í%s‚³‚ñB\n", name);
    }

    return 0;
}