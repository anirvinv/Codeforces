#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool visited[5];
int adjMatrix[5][5];

void bfs()
{
    queue<int> vertices;
    vertices.push(0);
    visited[0] = true;
    while (!vertices.empty())
    {
        int p = vertices.front();
        vertices.pop();
        cout << p << " ";
        for (int i = 0; i < 5; i++)
        {
            if (adjMatrix[p][i] == 1)
            {
                if (!visited[i])
                {
                    vertices.push(i);
                }
                visited[i] = true;
            }
        }
    }
}

void dfs(int v)
{
    cout << v << " ";
    visited[v] = true;

    for (int i = 0; i < 5; i++)
    {
        if (adjMatrix[v][i] == 1 && !visited[i])
        {
            dfs(i);
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

    for (pair<int, int> edge : edges)
    {
        adjMatrix[edge.first][edge.second] = 1;
        adjMatrix[edge.second][edge.first] = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "BFS: ";
    bfs();
    cout << endl;

    memset(visited, 0, sizeof visited);
    cout << "DFS: ";
    dfs(0);
    cout << endl;
}