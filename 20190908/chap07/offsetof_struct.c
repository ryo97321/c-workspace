#include <stdio.h>
#include <stddef.h>

struct test {
    char c1;
    int nx;
    char c2;
};

int main(void)
{
    printf("c1�̃I�t�Z�b�g=%u\n", (unsigned)offsetof(struct test, c1));
    printf("nx�̃I�t�Z�b�g=%u\n", (unsigned)offsetof(struct test, nx));
    printf("c2�̃I�t�Z�b�g=%u\n", (unsigned)offsetof(struct test, c2));

    return 0;
}