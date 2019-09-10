#include <stdio.h>

int main(void)
{
    FILE *fp;
    int no = 357;

    fp = fopen("TEST_TEXT", "w");
    if(fp != NULL) {
        fprintf(fp, "%d", no);
        fclose(fp);
    }

    return 0;
}