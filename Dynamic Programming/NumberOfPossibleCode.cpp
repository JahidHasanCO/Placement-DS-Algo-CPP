#include <bits/stdc++.h>
using namespace std;

//using recursion
// int num_codes(int * a , int size){
//     if(size == 0 || size == 1) return 1;
    
//     int output = num_codes(a,size-1);
//     if(a[size-2] * 10 + a[size-1] <= 26)
//         output += num_codes(a,size-2);

//     return output;
// }


// recursion + dp
// int num_codes(int * a , int size,int * dp){
//     if(size == 0 || size == 1) return 1;
    
//     if(dp[size] > 0) return dp[size];

//     int output = num_codes(a,size-1);
//     if(a[size-2] * 10 + a[size-1] <= 26)
//         output += num_codes(a,size-2);

//     return dp[size] = output;
// }


int num_codes(int * a , int size){
    
    int * dp = new int[size+1];
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 0; i <= size ; i++)
    {
        dp[i] = dp[i-1];

        if(a[i-2] * 10 + a[i-1] <= 26)
            dp[i]  += dp[i-2];
    }
    
    int ans = dp[size];
    delete [] dp;
    return ans;
}


int main()
{
    int a[] = {1,2,3,4};
    cout << num_codes(a,4);
    return 0;
}
