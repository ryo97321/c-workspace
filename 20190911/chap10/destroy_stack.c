#include <stdio.h>

void func(void)
{
    int i;
    char x[5];

    puts("�֐�func�̎��s���ł��B");
    for(i = -2; i < 8; i++)
        x[i] = 0;
}

int main(void)
{
    puts("�֐�func���Ăяo���܂��B");
    func();
    puts("�֐�func����߂��Ă��܂����B");

    return 0;
}