#include <stdio.h>
#include <assert.h>

void div(int a, int b)
{
    assert(b != 0);

    printf("%dを%dで割った商は%dで剰余は%dです。\n", a, b, a / b, a % b);
}

int main(void)
{
    int a, b;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    div(a, b);

    return 0;
}