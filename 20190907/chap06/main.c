#define max 10

#include <stdio.h>
#include "sum.h"

int main(void)
{
    int n;

    do {
        printf("1~%d‚Ì®”’l : ", max);
        scanf("%d", &n);
    } while (n < 1 || n > max);

    printf("1~%d‚Ì˜a‚Í%d‚Å‚·B\n", n, sum(n));

    return 0;
}