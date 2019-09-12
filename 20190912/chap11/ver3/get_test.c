#include <ctype.h>
#include <stdio.h>

int getchr(void);
int ungetchr(int ch);

// ®”‚ğ“Ç‚İ‚ñ‚Å2”{‚Ì’l‚ğ•\¦
int getnum(void)
{
    int c = 0;
    int x = 0;
    int ch;

    while((ch = getchr()) != EOF && isdigit(ch)) {
        x = x * 10 + ch - '0';
        c++;
    }
    if(ch != EOF)
        ungetchr(ch);
    if(c) printf("%d\n", x * 2);

    return ch;
}

// •¶š‚ğ“Ç‚İ‚ñ‚Å‚»‚Ì‚Ü‚Ü•\¦
int getnnum(void)
{
    int ch;

    while((ch = getchr()) != EOF && !isdigit(ch))
        putchar(ch);
    if(ch != EOF)
        ungetchr(ch);
    putchar('\n');

    return ch;
}

int main(void)
{
    while(getnum() != EOF)
        if(getnnum() == EOF)
            break;
    
    return 0;
}