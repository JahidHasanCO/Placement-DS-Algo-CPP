#include <iostream>
using namespace std;

bool is_Sorted(int a[], int size)
{

    if (size == 0 || size == 1)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false;
    }

    bool smallOutput = is_Sorted(a + 1, size - 1);
    return smallOutput;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int brr[] = {1, 2, 7, 10, 5, 6, 3, 8, 9, 4};

    cout << "Array 1 is Sorted: " << is_Sorted(arr, 10) << endl;
    cout << "Array 2 is Sorted: " << is_Sorted(brr, 10) << endl;
    
    return 0;
}
