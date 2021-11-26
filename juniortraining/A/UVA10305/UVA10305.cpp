#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> adjlist[101];
bool visited[101];
int ordering[101];
int ordIndex = 1;
void topSort(int k)
{
    if (!visited[k])
    {
        visited[k] = true;
        for (int v : adjlist[k])
        {
            topSort(v);
        }
        ordering[ordIndex++] = k;
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(visited, 0, sizeof visited);
    memset(ordering, 0, sizeof ordering);
    int n, m;
    cin >> n >> m;
    while (n != 0)
    {
        ordIndex = 1;
        for (auto &v : adjlist)
        {
            v.clear();
        }
        memset(visited, 0, sizeof visited);
        memset(ordering, 0, sizeof ordering);
        int i, j;
        cin >> i >> j;
        adjlist[i].push_back(j);
        while (m--)
        {
            cin >> i >> j;
            adjlist[i].push_back(j);
        }

        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                topSort(i);
            }
        }

        for (int i = ordIndex - 1; i >= 1; i--)
        {
            cout << ordering[i] << " ";
        }
        cout << '\n';
        cin >> n >> m;
    }
}