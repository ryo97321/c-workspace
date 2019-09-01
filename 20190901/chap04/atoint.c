#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char temp[20];

    printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ : ");
    scanf("%s", temp);

    printf("%d‚Æ“ü—Í‚µ‚Ü‚µ‚½‚ËB\n", atoi(temp));

    return 0;
}