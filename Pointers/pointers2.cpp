#include <bits/stdc++.h>
using namespace std;

int main(){

    int a = 10;
    int * p = &a;

    cout << a << endl; //print value of a   
    cout << *p << endl; // print value of p

    cout << &a << endl; // print address of a
    cout << p << endl; // print address of p

    int *q = 0 ;// initlize null pointer

    return 0;
}
