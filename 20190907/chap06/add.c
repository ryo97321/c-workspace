#include <stdio.h>

int add(x, y)
int x, y;
{
    return x + y;
}

main()
{
    int x, y;

    printf("�����l����͂��� : ");  scanf("%d", &x);
    printf("�����l����͂��� : ");  scanf("%d", &y);

    printf("�����̘a��%d�ł��B\n", add(x, y));
}