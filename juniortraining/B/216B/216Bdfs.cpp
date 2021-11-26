#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> adjList[101];
bool visited[101];
bool colors[101];

void dfs(int k, bool color)
{
    if (!visited[k])
    {
        visited[k] = true;
        colors[k] = color;
        for (int v : adjList[k])
        {
            dfs(v, !color);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    memset(visited, 0, sizeof visited);
    memset(colors, 0, sizeof colors);
    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        dfs(i, 1);
    }

    int kick = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int v : adjList[i])
        {
            kick += colors[v] == colors[i];
        }
    }
    kick /= 2;
    if ((n - kick) % 2 != 0)
    {
        kick++;
    }
    cout << kick << endl;

    cout << endl;
}