#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

vector<int> adjlist[10100];
bool visited[10100];
vector<int> topsort;

void dfs(int v)
{
    visited[v] = 1;
    for (int u : adjlist[v])
    {
        if (!visited[u])
        {
            dfs(u);
        }
    }
    topsort.push_back(v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        topsort.clear();
        for (auto &v : adjlist)
        {
            v.clear();
        }
        memset(visited, 0, sizeof visited);

        int n;
        cin >> n;
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= n - 1; i++)
        {
            adjlist[i].push_back(i + 1);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                adjlist[i + 1].push_back(n + 1);
            }
            else
            {
                adjlist[n + 1].push_back(i + 1);
            }
        }

        for (int i = 1; i <= n + 1; i++)
        {
            if (!visited[i])
            {
                dfs(i);
            }
        }
        reverse(topsort.begin(), topsort.end());
        for (int u : topsort)
        {
            cout << u << " ";
        }
        cout << '\n';
    }
}