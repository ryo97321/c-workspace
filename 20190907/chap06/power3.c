#include <stdio.h>

extern double pow();

int main(void)
{
    double x;

    printf("�����l����͂��� : ");
    scanf("%lf", &x);

    printf("���̐��̂R���%.3f�ł��B\n", pow(x, 3));

    return 0;
}