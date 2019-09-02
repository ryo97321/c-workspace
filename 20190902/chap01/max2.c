#include <stdio.h>

#define max2(a, b) ((a) > (b) ? (a) : (b))

int (max2)(int a, int b)
{
    puts("ŠÖ””Åmax2‚ªŒÄ‚Î‚ê‚Ü‚µ‚½B");
    return a > b ? a : b;
}

int main(void)
{
    int x, y;

    printf("x‚Ì’l‚Í : ");   scanf("%d", &x);
    printf("y‚Ì’l‚Í : ");   scanf("%d", &y);

    printf("max2(x, y) = %d\n\n", max2(x, y));
    printf("(max2)(x, y) = %d\n", (max2)(x, y));

    return 0;
}