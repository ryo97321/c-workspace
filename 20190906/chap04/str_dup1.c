#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char st[128];
    char *pt;

    printf("文字列stを入力してください : ");
    scanf("%s", st);

    pt = malloc(strlen(st) + 1);

    if(pt) {
        strcpy(pt, st);
        printf("st = %s\n", st);
        printf("pt = %s\n", pt);
        free(pt);
    }

    return 0;
}