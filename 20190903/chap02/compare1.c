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

    printf("sdata < (int)udata ���Ȃ킿 -1 < (int)1U �� ");
    if(sdata < (int)udata)
        puts("�^�B");
    else
        puts("�U�B");

    return 0;
}