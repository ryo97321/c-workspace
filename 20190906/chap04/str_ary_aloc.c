#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strdup(const char *s)
{
    char *p = malloc(strlen(s) + 1);
    return (p != NULL) ? strcpy(p, s) : NULL;
}

int main(void)
{
    int i;
    char *p[4];

    for(i = 0; i < 4; i++) {
        char temp[128];

        printf("•¶Žš—ñ : ");
        scanf("%s", temp);

        p[i] = strdup(temp);
    }

    for(i = 0; i < 4; i++)
        printf("p[%d] = %s\n", i, p[i] ? p[i] : NULL);

    for(i = 0; i < 4; i++)
        free(p[i]);

    return 0;
}