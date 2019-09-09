#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    char buffer[100];

    while(1) {
        printf("®”’l‚ğ“ü—Í‚¹‚æ : ");
        if(scanf("%s", buffer) == EOF) break;
        if((num = atoi(buffer)) == 9999) break;

        printf("‚ ‚È‚½‚Í%d‚Æ“ü—Í‚µ‚Ü‚µ‚½‚ËB\n", num);
    }

    return 0;
}