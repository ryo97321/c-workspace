#include <stdio.h>

int main(void)
{
    double x;

    printf("�����l����͂��� : ");
    scanf("%lf", &x);

    printf("���̐��̂R���%.3f�ł��B\n", pow(x, 3.0));

    return 0;
}