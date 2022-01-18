//code is not full
// have some error

#include <iostream>
using namespace std;

int FirstIndexedNumber(int a[], int size, int x, int currentIndex = 0){
    if(size == 0)
        return -1;
    
    if(a[0] == x){
        return currentIndex;
    }
    int smallOutput = FirstIndexedNumber(a+1, size - 1 , x, currentIndex + 1);
    return smallOutput;
}

int main()
{
    int a[] = {5,5,6,5,6};
    cout << FirstIndexedNumber(a,5,6) << endl;
    return 0;
}
