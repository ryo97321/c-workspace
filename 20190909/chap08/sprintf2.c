#include <stdio.h>

int main(void)
{
    int n1, n2;
    double x;
    char buf[256];

    printf("�����l����͂��Ă������� : ");
    scanf("%lf", &x);

    printf("���Ȃ��Ƃ������̕�����ɕϊ����܂��� : ");
    scanf("%d", &n1);

    printf("���̂����������͉����ł��� : ");
    scanf("%d", &n2);

    sprintf(buf, "%*.*f", n1, n2, x);

    printf("�ϊ���̕������\"%s\"�ł��B\n", buf);

    return 0;
}