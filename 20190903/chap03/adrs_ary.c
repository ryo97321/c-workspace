#include <stdio.h>

int main(void)
{
    int a[5];

    printf("a[0] address : %p\n", &a[0]);
    printf("a[1] address : %p\n", &a[1]);
    printf("a[2] address : %p\n", &a[2]);
    printf("a[3] address : %p\n", &a[3]);
    printf("a[4] address : %p\n", &a[4]);

    return 0;
}