#include <bits/stdc++.h>
using namespace std;

/* Simple Recursion Solution
int fib(int n){
    if(n == 1)
        return 1;
    if(n == 0)
        return 0;

    return fib(n-1) +  fib(n-2);
}
*/ 
int fibonacci(int n){
    int* arr = new int[n+1];

    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    int output = arr[n];

    delete [] arr;
    return output;

}
int main()
{
    cout << fibonacci(6) << endl;
    return 0;
}
