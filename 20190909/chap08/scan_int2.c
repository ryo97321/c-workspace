#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    char buffer[100];

    while(1) {
        printf("�����l����͂��� : ");
        if(scanf("%s", buffer) == EOF) break;
        if((num = atoi(buffer)) == 9999) break;

        printf("���Ȃ���%d�Ɠ��͂��܂����ˁB\n", num);
    }

    return 0;
}