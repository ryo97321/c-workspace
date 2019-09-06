#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char s[10] = "ABCDEFGHI";

    memset(s, '\0', sizeof(s));

    for(i = 0; i < sizeof(s); i++)
        printf("s[%d] = %d\n", i, s[i]);
    
    return 0;
}