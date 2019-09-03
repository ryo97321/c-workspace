#include <iostream>

using namespace std;

void increment(int& no)
{
    ++no;
}

void decrement(int& no)
{
    --no;
}

int main(void)
{
    int x = 5;

    increment(x);

    cout << "x : " << x << '\n';

    return 0;
}