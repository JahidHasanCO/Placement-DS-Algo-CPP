//code is not full
// have some error

#include <iostream>
using namespace std;

int FirstIndexedNumber(int a[], int size, int x){
    
    if(size == 0)
        return -1;
    
    if(a[0] == x)
        return 0;
    
    int smallOutput = FirstIndexedNumber(a+1, size - 1 , x);
    
    if( smallOutput == -1)
        return -1;
    return smallOutput + 1;
}

int main()
{
    int a[] = {5,5,6,5,6};
    cout << FirstIndexedNumber(a,5,6) << endl;
    return 0;
}
