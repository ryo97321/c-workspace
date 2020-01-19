#include <stdio.h>

int mul(int, int);

int main(void) {
    int a, b, result;

    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    result = mul(a, b);
    printf("a x b = %d\n", result);

    return 0;
}


int mul(int a, int b) {
    return a * b;
}