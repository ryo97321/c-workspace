#include <stdio.h>

#define DEBUG 0

int main(void)
{
    int a = 5;
    int x = 1;

#if DEBUG
    a = x;
#endif

    printf("a‚Ì’l‚Í%d‚Å‚·B\n", a);

    return 0;
}