#include <stdio.h>

int main(void)
{
    int sdata = -1;
    unsigned udata = 1;

    printf("sdata < udata ���Ȃ킿 -1 < 1U �� %s\n", (sdata < udata) ? "�^" : "�U");
    printf("(unsigned)sdata < udata ���Ȃ킿 (unsigned)-1 < 1U �� %s\n", ((unsigned)sdata < udata) ? "�^" : "�U");

    return 0;
}