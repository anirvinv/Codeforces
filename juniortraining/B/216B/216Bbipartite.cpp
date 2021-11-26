#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> adjlist[101];
int visited[101];
int cycles = 0;
void bfs(int k)
{
    queue<int> q;
    q.push(k);
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        visited[p] = 1;
        for (int i = 0; i < adjlist[k].size(); i++)
        {
            if (visited[adjlist[k][i]] == -1)
            {
                q.push(adjlist[k][i]);
                visited[adjlist[k][i]] = 0;
            }
            else if (visited[adjlist[k][i]] == 0)
            {
                cycles++;
            }
        }
    }
}

int main()
{
    memset(visited, -1, sizeof visited);
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        bfs(i);
    }

    if ((n - cycles) % 2 != 0)
    {
        cycles++;
    }
    cout << cycles << endl;
}