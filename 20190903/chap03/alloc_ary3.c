#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int (*x)[4][3];
    int n;

    puts("nx4x3�̔z����m�ۂ��܂��B");
    printf("n�̒l�� : ");
    scanf("%d", &n);

    x = calloc(n * 4 * 3, sizeof(int));

    if(x == NULL)
        printf("�L����̊m�ۂɎ��s���܂����B\n");
    else {
        int i, j, k;

        for(i = 0; i < n; i++)
            for(j = 0; j < 4; j++)
                for(k = 0; k < 3; k++)
                    printf("x[%d][%d][%d] : %d\n", i, j, k, x[i][j][k]);
        
        free(x);
    }

    return 0;
}