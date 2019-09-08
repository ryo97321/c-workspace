struct __comp { double re, im; };

#define complex struct __comp

int main(void)
{
    complex a, b;
    complex x, y;

    a = b;
    x = b;

    return 0;
}