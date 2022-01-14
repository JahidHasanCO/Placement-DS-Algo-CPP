#include <iostream>
using namespace std;

int fib(int n){
    if(n == 1)
        return 1;
    if(n == 0)
        return 0;
    int smallOutput = fib(n-1);
    int smallOutput2 = fib(n-2);

    return smallOutput + smallOutput2;
}

int main()
{
    cout << fib(6) << endl;
    return 0;
}
