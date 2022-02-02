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

void printBFS(int **edges, int n, int sv)
{
    queue<int> pendingVertices;

    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
        visited[i] = false;

    pendingVertices.push(sv);
    visited[sv] = true;
    while (!pendingVertices.empty())
    {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        cout << currentVertex << endl;
        for (int i = 0; i < n; i++)
        {
            if (i == currentVertex)
                continue;
            if (edges[currentVertex][i] == 1 && !visited[i])
            {
                pendingVertices.push(i);
                visited[i] = true;
            }
        }
    }

    delete[] visited;
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

    printBFS(edges, n, 0);

    for (int j = 0; j < n; j++)
        delete[] edges[j]; // deeting sub arrays storage
    delete[] edges;        // delete main arrays addres

    return 0;
}