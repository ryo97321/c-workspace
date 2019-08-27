#include <time.h>
#include <stdio.h>

int sleep(unsigned long x)
{
    clock_t c1 = clock(), c2;

    do {
        if((c2 = clock()) == (clock_t)-1)
            return 0;
    } while(1000 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}

int main(void)
{
    int i;
    clock_t c;

    for(int i = 10; i > 0; i--) {
        printf("\r%2d", i);
        fflush(stdout);
        sleep(1000);
    }
    printf("\r\aFIRE!!\n");

    c = clock();
    printf("�v���O�����J�n����%.1f�b�o�߂��܂����B\n", (double)c / CLOCKS_PER_SEC);

    return 0;
}