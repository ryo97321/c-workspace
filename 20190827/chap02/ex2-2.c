#include <time.h>
#include <stdio.h>
#include <string.h>

int sleep(unsigned long x)
{
    clock_t c1 = clock(), c2;

    do {
        if((c2 = clock()) == (clock_t)-1)
            return 0;
    } while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}

void gput(const char *s, int speed)
{
    int s_len = strlen(s);

    for(int i = 0; i < s_len; i++) {
        putchar(s[i]);
        fflush(stdout);
        sleep(speed);
    }
}

int main(void)
{
    gput("Test", 100);

    return 0;
}