#include <stdio.h>

int main(void)
{
    char str[4] = "ABC";

    str[0] = '\0';

    printf("str = \"%s\"\n", str);

    return 0;
}