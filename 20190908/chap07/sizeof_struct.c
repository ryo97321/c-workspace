#include <stdio.h>

int main(void)
{
    struct test {
        char c1;
        int nx;
        char c2;
    };

    printf("�\����test�S�̂̑傫��=%u\n", (unsigned)sizeof(struct test));
    printf("�\����test�̃����o�̑傫���̍��v=%u\n", (unsigned)(sizeof(char) + sizeof(int) + sizeof(char)));

    return 0;
}