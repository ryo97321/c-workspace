#include <stdio.h>

void putstr(const char s[])
{
    int i;

    for(i = 0; s[i] != '\0'; i++) {
        putchar(s[i]);
    }
}

int main(void)
{
    char str[128];

    printf("input string : ");
    scanf("%s", str);

    putstr(str);
    putchar('\n');

    return 0;
}