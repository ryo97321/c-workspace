#define max 10

#include <stdio.h>
#include "sum.h"

int main(void)
{
    int n;

    do {
        printf("1~%d�̐����l : ", max);
        scanf("%d", &n);
    } while (n < 1 || n > max);

    printf("1~%d�̘a��%d�ł��B\n", n, sum(n));

    return 0;
}