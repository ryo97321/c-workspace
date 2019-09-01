#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "Hello";
    char *p_chr;
    p_chr = str;

    for(int i=0; i<strlen(str); i++) {
        printf("%d : %c\n", i, *(p_chr + i));
    }

    return 0;
}