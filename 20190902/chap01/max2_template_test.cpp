#include <iostream>

#include "max2_template.h"

using namespace std;

int main(void)
{
    int a, b;
    double x, y;

    cout << "����a�̒l : "; cin >> a;
    cout << "����b�̒l : "; cin >> b;
    cout << "����x�̒l : "; cin >> x;
    cout << "����y�̒l : "; cin >> y;

    cout << "max2(a, b) = " << max2(a, b) << '\n';
    cout << "max2(x, y) = " << max2(x, y) << '\n';

    return 0;
}