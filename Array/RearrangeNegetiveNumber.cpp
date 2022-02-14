#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ln (int)1e
#define pi acos(-1.0)
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second

#define INF 1000000000000000000
#define LES -1000000000000000000
#define ll long long
#define str string

#define lb printf("\n");

#define test scanf("%d", &t);
#define sn scanf("%d", &n);
#define sc1 scanf("%d", &a);
#define sc2 scanf("%d %d", &a, &b);
#define sc3 scanf("%d %d %d", &a, &b, &c);
#define sc4 scanf("%d %d %d %d", &a, &b, &c, &d);

void rearrange(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

void code()
{
    int arr[] = {1, 3, 2, 4, -2, -3, 4, -1, -3, 6, 7, 5};
    rearrange(arr, 12);
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        code();
    }

    return 0;
}