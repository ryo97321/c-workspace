#include <iostream>

using namespace std;

struct Complex {
private:
    double re, im;
public:
    Complex(double r, double i) : re(r), im(i) { }

    double Real(void) { return re; }
    double Image(void) { return im; }
};

int main(void)
{
    Complex a(0, 0);
    Complex *pa = &a;

    cout << " a = (" << a.Real() << ", " << a.Image() << ")\n";
    cout << " *pa = (" << pa->Real() << ", " << pa->Image() << ")\n";

    return 0;
}