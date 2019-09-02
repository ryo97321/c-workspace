#include <stdio.h>

int z = 1;

int main(void)
{
    int x = z;
    int z = 0;
    int y = z;

    printf("x = %d y = %d z = %d\n", x, y, z);

    return 0;
}