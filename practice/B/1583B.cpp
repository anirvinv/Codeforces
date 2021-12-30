#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)

vector<int> adjlist[100001];
bool visited[100001];

void dfs(int v)
{

    visited[v] = true;
    for (int u : adjlist[v])
    {
        if (!visited[u])
        {
            dfs(u);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        memset(visited, 0, sizeof visited);
        for (auto &v : adjlist)
        {
            v.clear();
        }

        int n, m;
        cin >> n >> m;
        int restr[m][3];
        fo(i, m)
        {
            cin >> restr[i][0];
            cin >> restr[i][1];
            cin >> restr[i][2];
        }

        fo(i, m)
        {
            memset(visited, 0, sizeof visited);
            int a = restr[i][0];
            int b = restr[i][1];
            int c = restr[i][2];
            dfs(a);
            if (!visited[c])
            {
                adjlist[a].push_back(c);
                adjlist[c].push_back(a);
            }
        }
        // connecting components if separate
        memset(visited, 0, sizeof visited);
        dfs(1);
        for (int i = 2; i <= n; i++)
        {
            if (!visited[i])
            {
                dfs(i);
                adjlist[1].push_back(i);
                adjlist[i].push_back(1);
            }
        }

        // printing the edges

        bool shown[n + 1][n + 1];
        memset(shown, 0, sizeof shown);
        for (int i = 1; i <= n; i++)
        {
            for (auto v : adjlist[i])
            {
                if (!shown[i][v])
                {
                    cout << i << " " << v << endl;
                }
                shown[i][v] = 1;
                shown[v][i] = 1;
            }
        }
    }
}