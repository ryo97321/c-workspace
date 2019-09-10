#include <stdio.h>

int main(void)
{
    int ch;
    char name[20];

    printf("–¼‘O‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ : ");
    scanf("%s", name);

    printf("‚æ‚ë‚µ‚¢‚Å‚·‚© (Y / N) : ");
    fflush(stdin);
    ch = getchar();

    if(ch == 'Y' || ch == 'y') {
        printf("‚±‚ñ‚É‚¿‚Í%s‚³‚ñB\n", name);
    }

    return 0;
}