#include <bits/stdc++.h>
using namespace std;

int lis(int *arr, int size)
{

    int *dp = new int[size];
    dp[0] = 1;

    for (int i = 1; i < size; i++)
    {
        dp[i] = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
                continue;
            int possibleAns = dp[j] + 1;
            if (possibleAns > dp[i])
                dp[i] = possibleAns;
        }
    }
    int best = 0;
    for (int i = 0; i < size; i++)
    {
        if (best < dp[i])
            best = dp[i];
    }
    delete[] dp;
    return best;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << lis(arr,n) << endl;
    delete[] arr;

    return 0;
}
