#include <stdio.h>

int main(void)
{
    int a, b;

    printf("a : ");
    scanf("%d", &a);

    printf("b : ");
    scanf("%d", &b);

    if(a = b)
        printf("Å° a = %d\nÅ° b = %d\n", a, b);
    else
        printf("Å† a = %d\nÅ† b = %d\n", a, b);

    return 0;
}