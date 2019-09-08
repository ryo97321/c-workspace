#include <stdio.h>

int main(void)
{
    struct xy {
        int x;
        int y;
    };

    struct xy s = {1};
    struct xy t = s;

    printf("s.x = %d\n", s.x);
    printf("s.y = %d\n", s.y);
    printf("t.x = %d\n", t.x);
    printf("t.y = %d\n", t.y);

    return 0;
}