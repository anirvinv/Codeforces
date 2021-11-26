#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool visited[10000];
vector<int> adjlist[10000];
void dfs(int k)
{
    if (visited[k])
        return;
    visited[k] = true;
    for (int i : adjlist[k])
    {
        dfs(i);
    }
}
int main()
{
    int t;
    cin >> t;
    int testCase = 1;
    while (t--)
    {
        memset(visited, 0, sizeof visited);
        int n;
        cin >> n;
        int arr[n][n];
        int count = 0;
        vector<int> xIndices;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char v;
                cin >> v;
                if (v == '.')
                {
                    arr[i][j] = -1;
                }
                else
                {
                    if (v == 'x')
                    {
                        xIndices.push_back(count);
                    }
                    arr[i][j] = count;
                    count++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] != -1)
                {
                    if ((i < n - 1) && arr[i + 1][j] != -1)
                    {
                        adjlist[arr[i][j]].push_back(arr[i + 1][j]);
                        adjlist[arr[i + 1][j]].push_back(arr[i][j]);
                    }
                    if ((j < n - 1) && arr[i][j + 1] != -1)
                    {
                        adjlist[arr[i][j]].push_back(arr[i][j + 1]);
                        adjlist[arr[i][j + 1]].push_back(arr[i][j]);
                    }
                }
            }
        }
        int connectedComps = 0;
        for (int i : xIndices)
        {
            if (!visited[i])
            {
                dfs(i);
                connectedComps++;
            }
        }

        cout << "Case " << testCase << ": " << connectedComps << endl;
        testCase++;
        for (auto &v : adjlist)
        {
            v.clear();
        }
    }
}