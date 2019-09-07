#include <stdio.h>

int add(x, y)
int x, y;
{
    return x + y;
}

main()
{
    int x, y;

    printf("®”’l‚ğ“ü—Í‚¹‚æ : ");  scanf("%d", &x);
    printf("®”’l‚ğ“ü—Í‚¹‚æ : ");  scanf("%d", &y);

    printf("‚»‚ê‚ç‚Ì˜a‚Í%d‚Å‚·B\n", add(x, y));
}