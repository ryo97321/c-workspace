#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;

    x = calloc(1, sizeof(int));

    if(x == NULL)
        printf("�L����̊m�ۂɎ��s���܂���\n");
    else {
        printf("�����l����͂��Ă������� : ");
        scanf("%d", x);
        printf("���Ȃ���%d�Ɠ��͂��܂����ˁB\n", *x);
        free(x);
    }

    return 0;
}