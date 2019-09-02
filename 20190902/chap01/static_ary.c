#include <stdio.h>

int vx[3] = {1, 2, 3};

int main(void)
{
    int i;
    int ma[3] = {1, 2, 3};
    static int ms[3] = {1, 2, 3};

    for(i = 0; i < 3; i++) {
        printf("vx[%d] = %d ma[%d] = %d ms[%d] = %d\n", i, vx[i], i, ma[i], i, ms[i]);
    }

    return 0;
}