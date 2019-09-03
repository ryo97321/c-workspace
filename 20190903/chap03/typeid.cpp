#include <iostream>
#include <typeinfo>

using namespace std;

int main(void)
{
    char c;
    short h;
    int i;
    long l;

    cout << "c‚ÌŒ^ : " << typeid(c).name() << '\n';
    cout << "h‚ÌŒ^ : " << typeid(h).name() << '\n';
    cout << "i‚ÌŒ^ : " << typeid(i).name() << '\n';
    cout << "l‚ÌŒ^ : " << typeid(l).name() << '\n';

    cout << "'A'‚ÌŒ^ : " << typeid('A').name() << '\n';
    cout << "100‚ÌŒ^ : " << typeid(100).name() << '\n';
    cout << "100U‚ÌŒ^ : " << typeid(100U).name() << '\n';
    cout << "100L‚ÌŒ^ : " << typeid(100L).name() << '\n';
    cout << "100UL‚ÌŒ^ : " << typeid(100UL).name() << '\n';
}