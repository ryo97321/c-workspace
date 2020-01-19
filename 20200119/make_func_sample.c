#include <stdio.h>

int sample01(int *tmp) {
    *tmp = *tmp + 2;
    return *tmp;
}

int main() {
    int scan_value;
    int value;

    scanf("%d", &scan_value);
    value = sample01(&scan_value);

    printf("%d\n", scan_value);
    printf("%d\n", value);
}