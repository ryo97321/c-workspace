#include <stdio.h>

int main(void) {
    int A, B;
    char S[256];

    scanf("%d%d", &A, &B);
    scanf("%s", S);

    printf("%d %s\n", (A+B), S);

    return 0;
}