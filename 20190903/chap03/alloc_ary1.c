#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    int i, nx;

    printf("��������z��̗v�f�� : ");
    scanf("%d", &nx);

    x = calloc(nx, sizeof(int));

    if(x == NULL)
        printf("�L����̊m�ۂɎ��s���܂���");
    else {
        for(i = 0; i < nx; i++)
            x[i] = i;
        for(i = 0; i < nx; i++)
            printf("x[%d] : %d\n", i, x[i]);

        free(x);
    }

    return 0;
}