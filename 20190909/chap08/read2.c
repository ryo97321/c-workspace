#include <stdio.h>

struct rec {
    char a[9];
    char b[7];
    char c[9];
    char d[10];
    char e[8];
};

int fgetword(FILE *fp, char *str)
{
    int ch;

    while((ch = fgetc(fp)) != EOF && ch != '\t' && ch != '\n') {
        if(ch != ' ')
            *str++ = ch;
    }
    *str = '\0';
    return ch;
}

int getrec(FILE *fp, struct rec *dat)
{
    if (fgetword(fp, dat->a) == EOF) return EOF;
    if (fgetword(fp, dat->b) == EOF) return EOF;
    if (fgetword(fp, dat->c) == EOF) return EOF;
    if (fgetword(fp, dat->d) == EOF) return EOF;
    if (fgetword(fp, dat->e) == EOF) return EOF;

    return 0;
}

int main(void)
{
    FILE *fp;
    struct rec dat;

    fp = fopen("data2.txt", "r");
    while(getrec(fp, &dat) == 0) {
        printf("%s\t%s\t%s\t%s\t%s\n", dat.a, dat.b, dat.c, dat.d, dat.e);
    }
    fclose(fp);

    return 0;
}