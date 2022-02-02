#include <bits/stdc++.h>
using namespace std;

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

// DFS
void print(int **edges, int n, int sv, bool *visited)
{
    cout << sv << endl;
    visited[sv] = true;
    for (int i = 0; i < n; i++)
    {
        if (i == sv)
            continue;
        if (edges[sv][i] == 1)
        {
            if (visited[i])
                continue;
            print(edges, n, i, visited);
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;
    int **edges = new int *[n];

    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    print(edges, n, 0, visited);

    for (int j = 0; j < n; j++)
    {
        delete[] edges[j]; // deeting sub arrays storage
    }
    delete[] edges; // delete main arrays addres

    delete[] visited;
    return 0;
}