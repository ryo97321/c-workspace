#include <stdio.h>

int main(void)
{
    int sdata = -1;
    unsigned udata = 1;

    printf("sdata < udata ���Ȃ킿 -1 < 1U �� ");
    if(sdata < udata)
        puts("�^�B");
    else
        puts("�U�B");

    printf("(unsigned)sdata < udata ���Ȃ킿 (unsigned)-1 < 1U �� ");
    if((unsigned)sdata < udata)
        puts("�^�B");
    else
        puts("�U�B");

    return 0;
}