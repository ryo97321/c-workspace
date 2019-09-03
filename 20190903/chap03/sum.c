#include <stdio.h>

int sumup(int v[], int n)
{
    int i;
    int sum = 0;

    for(i = 0; i < n; i++)
        sum += v[i];

    return sum;
}

int main(void)
{
    int i;
    int a[5];
    int na = sizeof(a) / sizeof(a[0]);

    printf("input %d element.\n", na);
    for(i = 0; i < na; i++) {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("sum : %d\n", sumup(a, na));

    return 0;
}