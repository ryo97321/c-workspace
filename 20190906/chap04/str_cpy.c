char *scpy1(char *d, const char *s)
{
    int i = 0;

    while((d[i] = s[i]) != '\0')
        i++;
    
    return d;
}

char *scpy2(char *d, const char *s)
{
    char *p = d;

    while((*d = *s) != '\0') {
        d++;
        s++;
    }

    return p;
}

char *scpy3(char *d, const char *s)
{
    char *p = d;

    while((*d++ = *s++) != '\0')
        ;

    return p;
}

char *scpy4(char *d, const char *s)
{
    char *p = d;

    while(*d++ = *s++)
        ;

    return p;
}