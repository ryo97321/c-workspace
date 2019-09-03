#include <iostream>
#include <typeinfo>

using namespace std;

int main(void)
{
    char c;
    short h;
    int i;
    long l;

    cout << "cÌ^ : " << typeid(c).name() << '\n';
    cout << "hÌ^ : " << typeid(h).name() << '\n';
    cout << "iÌ^ : " << typeid(i).name() << '\n';
    cout << "lÌ^ : " << typeid(l).name() << '\n';

    cout << "'A'Ì^ : " << typeid('A').name() << '\n';
    cout << "100Ì^ : " << typeid(100).name() << '\n';
    cout << "100UÌ^ : " << typeid(100U).name() << '\n';
    cout << "100LÌ^ : " << typeid(100L).name() << '\n';
    cout << "100ULÌ^ : " << typeid(100UL).name() << '\n';
}