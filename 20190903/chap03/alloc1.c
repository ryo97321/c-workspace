#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;

    x = calloc(1, sizeof(int));

    if(x == NULL)
        printf("�L����̊m�ۂɎ��s���܂���\n");
    else {
        // *x = 123;
        printf("*x : %d\n", *x);
        free(x);
    }

    return 0;
}