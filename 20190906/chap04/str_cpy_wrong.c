#include <stdio.h>

void scp1(char *f, char *t)
{
    while(*f != '\0') {
        *t = *f;
        f++; t++;
    }
    *t = '\0';
}

void scp2(char *f, char *t)
{
    do {
        *t++ = *f++;
    } while(*f);
}

int main(void)
{
    char astr[7] = "ABC";
    char bstr[7] = "XXXXXX";
    char cstr[7] = "YYYYYY";

    scp1(astr, bstr);
    scp2(astr, cstr);

    printf("astr = %s\n", astr);
    printf("bstr = %s\n", bstr);
    printf("cstr = %s\n", cstr);

    return 0;
}