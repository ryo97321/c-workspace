#include <stdio.h>

int main(void)
{
    int i;
    int x;

    printf("‰½’i•\Ž¦‚µ‚Ü‚·‚© : ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        printf("%*d\n", i, i % 10);
    }

    return 0;
}