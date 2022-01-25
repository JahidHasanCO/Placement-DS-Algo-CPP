#include <bits/stdc++.h>
using namespace std;

int BalancedTree(int h){
    
    if(h == 0 || h == 1)
        return 1;

    int m = pow(10,9) + 7;
    int x = BalancedTree(h-1);
    int y = BalancedTree(h-2);

    long res1 = (long)x*x;
    long res2 = (long) x*x*2;

    int ans1 = (int) (res1%m);
    int ans2 = (int) (res2%m);

    int ans = (ans1+ans2) % m;

    return ans;

}

int main()
{
    int h = 8;
    
    cout << BalancedTree(h) << endl;
    return 0;
}
