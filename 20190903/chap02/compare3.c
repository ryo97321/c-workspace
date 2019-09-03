#include <stdio.h>

int main(void)
{
    int sdata = -1;
    unsigned udata = 1;

    printf("sdata < udata ‚·‚È‚í‚¿ -1 < 1U ‚Í %s\n", (sdata < udata) ? "^" : "‹U");
    printf("(unsigned)sdata < udata ‚·‚È‚í‚¿ (unsigned)-1 < 1U ‚Í %s\n", ((unsigned)sdata < udata) ? "^" : "‹U");

    return 0;
}