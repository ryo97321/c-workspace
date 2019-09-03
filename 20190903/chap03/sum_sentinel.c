#include <stdio.h>

#define INVALID -1

int sumup(int v[])
{
    int i;
    int sum = 0;

    for(i = 0; v[i] != INVALID; i++)
        sum += v[i];

    return sum;
}

int main(void)
{
    int i;
    int a[128];
    int na = sizeof(a) / sizeof(a[0]);

    printf("input %d elements (end element : -1).\n", na - 1);
    for(i = 0; i < na - 1; i++) {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
        if(a[i] == INVALID) break;
    }
    if(i == na - 1)
        a[i] = INVALID;

    printf("sum : %d\n", sumup(a));

    return 0;
}