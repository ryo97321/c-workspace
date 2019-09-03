#include <stdio.h>

void increment(int *no)
{
    ++*no;
}

void decrement(int *no)
{
    --*no;
}

int main(void)
{
    int x = 5;
    int y = 3;

    increment(&x);
    decrement(&y);

    printf("x : %d\n", x);
    printf("y : %d\n", y);

    return 0;
}