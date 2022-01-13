#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0)
        return 1; // factorial 0 = 1 so it returns 1
    return n * factorial(n-1); // it call itself to get small output....
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
