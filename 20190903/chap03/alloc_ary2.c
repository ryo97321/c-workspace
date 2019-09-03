#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int (*x)[3];
    int n;

    puts("n×3の2次元配列を確保します。");
    printf("nの値は : ");
    scanf("%d", &n);

    x = calloc(n * 3, sizeof(int));

    if(x == NULL)
        printf("記憶域の確保に失敗しました\n");
    else {
        int i, j;

        for(i = 0; i < n; i++) {
            for(j = 0; j < 3; j++) {
                printf("x[%d][%d] : %d\n", i, j, x[i][j]);
            }
        }

        free(x);
    }

    return 0;
}