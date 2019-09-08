typedef struct { double re, im; } complex;
typedef complex * compptr;

int main(void)
{
    complex a, b = {0, 0};
    complex x, y = {0, 0};
    compptr pa, pb;

    a = b;
    x = b;
    pa = &a;
    pb = &b;

    return 0;
}