#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[4] = "ABC";

    strcpy(str, "");

    printf("str = \"%s\"\n", str);

    return 0;
}