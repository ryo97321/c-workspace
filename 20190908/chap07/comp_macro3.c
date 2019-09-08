#include <stdio.h>

struct __comp { double re, im; };

#define complex struct __comp
#define compptr struct __comp *

int main(void)
{
    complex a, b;
    compptr pa, pb;

    pa = &a;
    pb = &b;

    return 0;
}