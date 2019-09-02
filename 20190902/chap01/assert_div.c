#include <stdio.h>
#include <assert.h>

void div(int a, int b)
{
    assert(b != 0);

    printf("%d‚ğ%d‚ÅŠ„‚Á‚½¤‚Í%d‚Åè—]‚Í%d‚Å‚·B\n", a, b, a / b, a % b);
}

int main(void)
{
    int a, b;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    div(a, b);

    return 0;
}