#include <stdio.h>

int main(void)
{
    int a, b;

    printf("a : ");
    scanf("%d", &a);

    printf("b : ");
    scanf("%d", &b);

    if(a = b)
        printf("�� a = %d\n�� b = %d\n", a, b);
    else
        printf("�� a = %d\n�� b = %d\n", a, b);

    return 0;
}