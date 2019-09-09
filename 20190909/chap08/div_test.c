#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numer, denom;
    div_t qr;

    printf("Š„‚ç‚ê‚é” : ");    scanf("%d", &numer);
    printf("Š„‚é” : ");        scanf("%d", &denom);

    qr = div(numer, denom);

    printf("¤‚Í%d‚Åè—]‚Í%d‚Å‚·B\n", qr.quot, qr.rem);

    return 0;
}