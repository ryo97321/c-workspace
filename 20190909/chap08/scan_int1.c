#include <stdio.h>

int main(void)
{
    int num;

    while (1) {
        printf("®”’l‚ğ“ü—Í‚¹‚æ : ");
        scanf("%d", &num);
        if (num == 9999) break;

        printf("‚ ‚È‚½‚Í%d‚Æ“ü—Í‚µ‚Ü‚µ‚½‚ËB\n", num);
    }

    return 0;
}