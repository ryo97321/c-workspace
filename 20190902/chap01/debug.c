#include <stdio.h>

#define DEBUG 0

int main(void)
{
    int a = 5;
    int x = 1;

#if DEBUG
    a = x;
#endif

    printf("aの値は%dです。\n", a);

    return 0;
}