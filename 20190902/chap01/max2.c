#include <stdio.h>

#define max2(a, b) ((a) > (b) ? (a) : (b))

int (max2)(int a, int b)
{
    puts("�֐���max2���Ă΂�܂����B");
    return a > b ? a : b;
}

int main(void)
{
    int x, y;

    printf("x�̒l�� : ");   scanf("%d", &x);
    printf("y�̒l�� : ");   scanf("%d", &y);

    printf("max2(x, y) = %d\n\n", max2(x, y));
    printf("(max2)(x, y) = %d\n", (max2)(x, y));

    return 0;
}