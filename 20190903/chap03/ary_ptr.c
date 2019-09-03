#include <stdio.h>

int main(void)
{
    double x[5];

    printf("x : %p\n", x);
    printf("&x[0] : %p\n", &x[0]);

    return 0;
}