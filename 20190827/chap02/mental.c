#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;
    int x;
    clock_t start, end;
    double req_time;

    srand(time(NULL));

    a = 100 + rand() % 900;
    b = 100 + rand() % 900;
    c = 100 + rand() % 900;

    printf("%d + %d + %d�͉��ł��� : ", a, b, c);

    start = clock();

    while(1) {
        scanf("%d", &x);
        if(x == a + b + c)
            break;
        printf("\a�Ⴂ�܂���!!\n�ē��͂��Ă������� : ");
    }

    end = clock();

    req_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("%.1f�b������܂����B\n", req_time);

    if (req_time > 30.0)
        printf("���Ԃ������肷���ł��B\n");
    else if (req_time > 17.0)
        printf("�܂��܂��ł��ˁB\n");
    else
        printf("�f�����ł��ˁB\n");

    return 0;
}