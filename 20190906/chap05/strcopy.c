#include <stdio.h>

char *strcopy(char *d, const char *s)
{
    char *p = d;

    while(*d++ = *s++)
        ;

    return p;
}

int main(void)
{
    char sx[20] = "ABC";
    char sy[20] = "";

    strcopy(sy, sx);

    printf("¶ñsx = %s\n", sx);
    printf("¶ñsy = %s\n", sy);

    return 0;
}