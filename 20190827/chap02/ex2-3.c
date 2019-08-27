#include <time.h>
#include <stdio.h>
#include <string.h>

int sleep(unsigned long x)
{
    clock_t c1 = clock(), c2;

    do {
        if ((c2 = clock()) == (clock_t)-1)
            return 0;
    } while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}

void bput(const char *s, int d, int e, int n)
{
    int s_len = strlen(s);

    for(int i = 0; i < n; i++) {
        printf("\r%s", s);
        fflush(stdout);
        sleep(d);
        printf("\r%*s", s_len, "");
        fflush(stdout);
        sleep(e);
    }
}

int main(void)
{
    bput("Test", 1000, 1000, 3);

    return 0;
}