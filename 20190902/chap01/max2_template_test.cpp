#include <iostream>

#include "max2_template.h"

using namespace std;

int main(void)
{
    int a, b;
    double x, y;

    cout << "整数aの値 : "; cin >> a;
    cout << "整数bの値 : "; cin >> b;
    cout << "整数xの値 : "; cin >> x;
    cout << "整数yの値 : "; cin >> y;

    cout << "max2(a, b) = " << max2(a, b) << '\n';
    cout << "max2(x, y) = " << max2(x, y) << '\n';

    return 0;
}