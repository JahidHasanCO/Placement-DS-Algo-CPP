#include <bits/stdc++.h>
using namespace std;

int main(){

    int i = 10;
    int * p = &i;

    cout << p << endl; 
    p = p + 1; // p address add 4 bits 
    cout << p << endl;

    cout << p << endl; 
    p = p - 1; // p address sub 4 bits 
    cout << p << endl;

    return 0;
}
 