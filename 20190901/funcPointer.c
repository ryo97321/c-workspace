#include <stdio.h>

typedef int (*calc)(int i1, int i2);

int sum(int i1, int i2) {
    return i1 + i2;
}

int mul(int i1, int i2) {
    return i1 * i2;
}

int main(void) {
    int i1, i2, result;
    calc c;

    i1 = 2;
    i2 = 3;

    c = &sum;
    result = c(i1, i2);
    printf("result = %d\n", result);

    c = &mul;
    result = c(i1, i2);
    printf("result = %d\n", result);

    return 0;
}