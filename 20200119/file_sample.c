#include <stdio.h>

FILE *fp;
int i;

int main() {
    fp = fopen("example.txt", "r");
    fscanf(fp, "%d", &i);
    printf("i = %d\n", i);
    fclose(fp);

    return 0;
}