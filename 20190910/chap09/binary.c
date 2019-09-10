#include <stdio.h>

int main(void)
{
    FILE *fp;
    int no = 357;

    fp = fopen("TEST_BIN", "wb");
    if(fp != NULL) {
        fwrite(&no, sizeof(int), 1, fp);
        fclose(fp);
    }

    return 0;
}