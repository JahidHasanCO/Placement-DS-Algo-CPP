#include <iostream>
using namespace std;

#define PI 3.14

int a;

void g()
{
    cout << a << endl;
}

void f()
{
    cout << a << endl;
    a++;
    g();
}

int main()
{
    int r = 2;
    a = 10;
    cout << PI * r * r << endl;

    f();
    a++;
    cout << a << endl;
    return 0;
}
