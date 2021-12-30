#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)

vector<int> adjlist[100001];
vector<int> otheradjlist[100001];
int visited[100001];

bool isCyclic(int v)
{
    visited[v] = 0;
    for (int u : adjlist[v])
    {
        if (visited[u] == 0)
        {
            return true;
        }
        else if (visited[u] == -1)
        {
            visited[u] = 0;
            isCyclic(u);
        }
    }

    visited[v] = 1;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    memset(visited, -1, sizeof visited);
    fo(i, m)
    {
        int v1, v2;
        cin >> v1 >> v2;
        adjlist[v1].push_back(v2);
        otheradjlist[v1].push_back(v2);
        otheradjlist[v2].push_back(v1);
    }
    bool cyclic = false;
    for (int i = 1; i <= n; i++)
    {
        cyclic |= isCyclic(i);
        if (cyclic)
        {
            break;
        }
    }
    if (cyclic)
    {
        cout << "No" << endl;
    }
    else
    {
        bool rip = false;
        for (int i = 1; i <= n; i++)
        {
            if (adjlist[i].size() > 2)
            {
                rip = true;
                break;
            }
        }
        if (rip)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}