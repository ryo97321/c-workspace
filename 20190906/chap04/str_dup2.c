#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strdup(const char* s)
{
    char *p = malloc(strlen(s) + 1);
    return (p != NULL) ? strcpy(p, s) : NULL;
}

int main(void)
{
    char st[128];
    char *pt;

    printf("•¶Žš—ñst‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ : ");
    scanf("%s", st);

    if(pt = strdup(st)) {
        printf("st = %s\n", st);
        printf("pt = %s\n", pt);
        free(pt);
    }

    return 0;
}