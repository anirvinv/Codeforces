#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool visited[5];
vector<int> adjlist[5];

void bfs()
{
    queue<int> vertices;
    vertices.push(0);
    visited[0] = true;
    while (!vertices.empty())
    {
        int p = vertices.front();
        vertices.pop();
        for (int i = 0; i < adjlist[p].size(); i++)
        {
            if (!visited[adjlist[p][i]])
            {
                vertices.push(adjlist[p][i]);
                visited[adjlist[p][i]] = true;
            }
        }
        cout << p << " ";
    }
}

void dfs(int v)
{
    cout << v << " ";
    visited[v] = true;
    for (int i = 0; i < adjlist[v].size(); i++)
    {
        if (!visited[adjlist[v][i]])
        {
            dfs(adjlist[v][i]);
        }
    }
}

int main()
{

    vector<pair<int, int>> edges;
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(2, 3));
    edges.push_back(make_pair(1, 3));
    edges.push_back(make_pair(1, 4));
    edges.push_back(make_pair(0, 4));

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << i << ": { ";
        for (int j = 0; j < adjlist[i].size(); j++)
        {
            if (j == adjlist[i].size() - 1)
            {

                cout << adjlist[i][j] << " ";
            }
            else
            {
                cout << adjlist[i][j] << ", ";
            }
        }
        cout << "} " << endl;
    }
    cout << "BFS: ";
    bfs();
    cout << endl;

    memset(visited, 0, sizeof visited);
    cout << "DFS: ";
    dfs(0);
    cout << endl;
}