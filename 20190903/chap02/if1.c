#include <stdio.h>

int main(void)
{
    int nx;

    printf("nx�̒l����͂��� : ");
    scanf("%d", &nx);

    if(nx)
        puts("�����0�ł͂���܂���B");
    else
        puts("�����0�ł��B");

    return 0;
}