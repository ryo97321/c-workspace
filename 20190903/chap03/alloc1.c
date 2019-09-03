#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;

    x = calloc(1, sizeof(int));

    if(x == NULL)
        printf("‹L‰¯ˆæ‚ÌŠm•Û‚ÉŽ¸”s‚µ‚Ü‚µ‚½\n");
    else {
        // *x = 123;
        printf("*x : %d\n", *x);
        free(x);
    }

    return 0;
}