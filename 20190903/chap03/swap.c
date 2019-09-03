#include <stdio.h>

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_intptr(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x, y;
    int *p1 = &x;
    int *p2 = &y;

    puts("p1 -> x , p2 -> y");
    printf("x : "); scanf("%d", &x);
    printf("y : "); scanf("%d", &y);

    swap_int(&x, &y);

    puts("x exchanged y");
    printf("p1 : %d\n", *p1);
    printf("p2 : %d\n", *p2);

    swap_intptr(&p1, &p2);

    puts("p1 exchanged p2");
    printf("p1 : %d\n", *p1);
    printf("p2 : %d\n", *p2);

    return 0;
}