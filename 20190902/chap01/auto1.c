#include <math.h>
#include <stdio.h>

void func(int no)
{
    register int i;
    auto int x = 100;

    printf("x = %d\n", x);

    for(i = 0; i < no; i++) {
        double x = sin((double)i / no);
        printf("x = %d\n", x);
    }
    printf("x = %d\n", x);
}

int main(void)
{
    func(10);

    return 0;
}