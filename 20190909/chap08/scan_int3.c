#include <ctype.h>
#include <stdio.h>

int strtoi(const char *str, int *err)
{
    int no = 0;
    int sign = 1;

    while(isspace(*str))
        str++;
    
    switch(*str) {
        case '+' : str++;               break;
        case '-' : str++;   sign = -1;  break;
    }

    for( ; isdigit(*str); str++)
        no = no * 10 + (*str - '0');
    no *= sign;

    *err = *str ? 1 : 0;

    return no;
}

int main(void)
{
    int num, err;
    char buffer[100];

    while(1) {
        printf("�����l����͂��� : ");
        scanf("%s", buffer);

        num = strtoi(buffer, &err);
        if(err)
            puts("\a�����l�ɕϊ��ł��܂���ł����B");
        else {
            if (num == 9999)
                break;
            printf("���Ȃ���%d�Ɠ��͂��܂����ˁB\n", num);
        }
    }

    return 0;
}