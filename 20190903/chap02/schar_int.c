#include <stdio.h>
#include <limits.h>

int main(void)
{
    int x;
    signed char ch = CHAR_MAX;

    printf("ch : %d\n", ch);

    x = ch + 1;
    printf("\nx = ch + 1;\n");
    printf("x : %d\n", x);

    x = ++ch;
    printf("\nx = ++ch;\n");
    printf("x : %d\n", x);

    return 0;
}