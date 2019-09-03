#include <iostream>
#include <typeinfo>

using namespace std;

void func(int d1[], int d2[][3], int d3[][4][3])
{
    cout << "d1 : " << typeid(d1).name() << '\n';
    cout << "d2 : " << typeid(d2).name() << '\n';
    cout << "d3 : " << typeid(d3).name() << '\n';
}

int main()
{
    int n;
    int* p1;
    int** p2;
    int a1[3];
    int a2[4][3];
    int a3[5][4][3];

    cout << "n : " << typeid(n).name() << '\n';
    cout << "&n : " << typeid(&n).name() << '\n';
    cout << "*&n : " << typeid(*&n).name() << '\n';
    cout << "p1 : " << typeid(p1).name() << '\n';
    cout << "*p1 : " << typeid(*p1).name() << '\n';
    cout << "p2 : " << typeid(p2).name() << '\n';
    cout << "*p2 : " << typeid(*p2).name() << '\n';
    cout << "**p2 : " << typeid(**p2).name() << '\n';

    cout << "a1 : " << typeid(a1).name() << '\n';
    cout << "&a1[0] : " << typeid(&a1[0]).name() << '\n';

    cout << "a2 : " << typeid(a2).name() << '\n';
    cout << "&a2[0] : " << typeid(&a2[0]).name() << '\n';
    cout << "&a2[0][0] : " << typeid(&a2[0][0]).name() << '\n';

    cout << "a3 : " << typeid(a3).name() << '\n';
    cout << "&a3[0] : " << typeid(&a3[0]).name() << '\n';
    cout << "&a3[0][0] : " << typeid(&a3[0][0]).name() << '\n';
    cout << "&a3[0][0][0] : " << typeid(&a3[0][0][0]).name() << '\n';

    func(a1, a2, a3);
}