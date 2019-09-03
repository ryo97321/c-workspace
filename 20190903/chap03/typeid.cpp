#include <iostream>
#include <typeinfo>

using namespace std;

int main(void)
{
    char c;
    short h;
    int i;
    long l;

    cout << "c�̌^ : " << typeid(c).name() << '\n';
    cout << "h�̌^ : " << typeid(h).name() << '\n';
    cout << "i�̌^ : " << typeid(i).name() << '\n';
    cout << "l�̌^ : " << typeid(l).name() << '\n';

    cout << "'A'�̌^ : " << typeid('A').name() << '\n';
    cout << "100�̌^ : " << typeid(100).name() << '\n';
    cout << "100U�̌^ : " << typeid(100U).name() << '\n';
    cout << "100L�̌^ : " << typeid(100L).name() << '\n';
    cout << "100UL�̌^ : " << typeid(100UL).name() << '\n';
}