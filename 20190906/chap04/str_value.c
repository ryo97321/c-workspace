#include <stdio.h>

int main(void)
{
    char *ptr = "ABCD";

    printf("ptr = %s\n", ptr);
    printf("ptr = %p\n", ptr);
    printf("*ptr = %c\n", *ptr);

    return 0;
}