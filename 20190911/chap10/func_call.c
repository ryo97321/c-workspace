#include <stdio.h>

void fa(void)
{
    puts("   ΦfaJn");
    puts("   ΦfaIΉ");
}

void fb(void)
{
    puts("   ΦfbJn");
    puts("   ΦfbIΉ");
}

void fc(void)
{
    puts("  ΦfcJn");
    fa();
    fb();
    puts("  ΦfcIΉ");
}

int main(void)
{
    puts(" mainΦJn");
    fc();
    puts(" mainΦIΉ");

    return 0;
}