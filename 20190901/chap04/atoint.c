#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char temp[20];

    printf("��������͂��Ă������� : ");
    scanf("%s", temp);

    printf("%d�Ɠ��͂��܂����ˁB\n", atoi(temp));

    return 0;
}