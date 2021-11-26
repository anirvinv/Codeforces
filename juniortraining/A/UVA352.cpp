#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool visited[25 * 25];
void dfs(int v, vector<int> adjList[])
{
    if (visited[v])
        return;
    visited[v] = true;
    for (int i = 0; i < adjList[v].size(); i++)
    {
        dfs(adjList[v][i], adjList);
    }
}

int main()
{
    int n;
    int count = 1;
    memset(visited, 0, sizeof visited);
    while (cin >> n)
    {
        memset(visited, 0, sizeof visited);
        int img[n][n];

        int verticesCount = 0;
        int vert = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                img[i][j] = s[j] - '0';
                verticesCount += img[i][j];
                if (img[i][j] == 0)
                {
                    img[i][j] = -1;
                }
                else if (img[i][j])
                {
                    img[i][j] = vert;
                    vert++;
                }
            }
        }

        vector<int> adjList[verticesCount];

        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if (img[i][j] >= 0)
                {
                    if (i > 0 && img[i - 1][j] >= 0)
                    {
                        adjList[img[i][j]].push_back(img[i - 1][j]);
                    }
                    if (i < n - 1 && img[i + 1][j] >= 0)
                    {
                        adjList[img[i][j]].push_back(img[i + 1][j]);
                    }
                    if (j > 0 && img[i][j - 1] >= 0)
                    {
                        adjList[img[i][j]].push_back(img[i][j - 1]);
                    }
                    if (j < n - 1 && img[i][j + 1] >= 0)
                    {
                        adjList[img[i][j]].push_back(img[i][j + 1]);
                    }
                    if (i > 0 && j > 0 && img[i - 1][j - 1] >= 0)
                    {
                        adjList[img[i][j]].push_back(img[i - 1][j - 1]);
                    }
                    if (i < n - 1 && j < n - 1 && img[i + 1][j + 1] >= 0)
                    {
                        adjList[img[i][j]].push_back(img[i + 1][j + 1]);
                    }
                    if (i < n - 1 && j > 0 && img[i + 1][j - 1] >= 0)
                    {
                        adjList[img[i][j]].push_back(img[i + 1][j - 1]);
                    }
                    if (i > 0 && j < n - 1 && img[i - 1][j + 1] >= 0)
                    {
                        adjList[img[i][j]].push_back(img[i - 1][j + 1]);
                    }
                }
            }
        }

        int connectedComps = 0;
        for (int i = 0; i < verticesCount; i++)
        {
            if (!visited[i])
            {
                // cout << i << " ";
                connectedComps++;
                dfs(i, adjList);
            }
        }

        // cout << endl;
        cout << "Image number " << count++ << " contains " << connectedComps << " war eagles." << endl;
    }
}
