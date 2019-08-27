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

void telop(const char *s, int direction, int speed, int n)
{
    int cnt;
    int s_len = strlen(s);

    if(direction == 0) {            // ¶•ûŒü
        for(int i = 0; i < n; i++) {
            putchar('\r');
            for(int j = 0; j < s_len; j++) {
                if (cnt + j < s_len)
                    putchar(s[cnt + j]);
                else
                    putchar(s[cnt + j - s_len]);
            }
            fflush(stdout);
            sleep(speed);

            if(cnt < s_len - 1)
                cnt++;
            else
                cnt = 0;
        }
    } else if(direction == 1) {     // ‰E•ûŒü
        for(int i = 0; i < n; i++) {
            putchar('\r');
            for(int j = 0; j < s_len; j++) {
                if (cnt + j < s_len)
                    putchar(s[cnt + j]);
                else
                    putchar(s[cnt + j - s_len]);
            }
            fflush(stdout);
            sleep(speed);

            if(cnt > 0)
                cnt--;
            else
                cnt = s_len - 1;
        }
    }
}

int main(void)
{
    char s[] = "This is a sample message. ";
    int s_len = strlen(s);
    telop(s, 1, 75, s_len*2+1);
    return 0;
}