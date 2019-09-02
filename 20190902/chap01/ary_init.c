#include <stdio.h>

int main(void)
{
    int i;
    int b[3] = {1};

    if(b[1] != 0 || b[2] != 0)
        puts("³‚µ‚­‰Šú‰»‚³‚ê‚Ä‚¢‚Ü‚¹‚ñB");
    else
        for(int i = 0; i < 3; i++) {
            printf("b[%d] = %d\n", i, b[i]);
        }
    
    return 0;
}