#include <stdio.h>

FILE *fp;
char *field = "%s\t%s\t%s\t%s\t%s";
char a[9];
char b[7];
char c[9];
char d[10];
char e[8];

int main(void)
{
    fp = fopen("data1.txt", "r");
    while(fscanf(fp, field, a, b, c, d, e) != EOF) {
        printf(field, a, b, c, d, e);
        putchar('\n');
    }
    fclose(fp);

    return 0;
}