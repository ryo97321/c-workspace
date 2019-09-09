#include <stdio.h>

int main(void)
{
    int n1, n2;
    double x;
    char buf[256];

    printf("À”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ : ");
    scanf("%lf", &x);

    printf("­‚È‚­‚Æ‚à‰½Œ…‚Ì•¶š—ñ‚É•ÏŠ·‚µ‚Ü‚·‚© : ");
    scanf("%d", &n1);

    printf("‚»‚Ì‚¤‚¿¬”•”‚Í‰½Œ…‚Å‚·‚© : ");
    scanf("%d", &n2);

    sprintf(buf, "%*.*f", n1, n2, x);

    printf("•ÏŠ·Œã‚Ì•¶š—ñ‚Í\"%s\"‚Å‚·B\n", buf);

    return 0;
}