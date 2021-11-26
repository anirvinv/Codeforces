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

map<int, int> indices;
int ordering[100001];
vector<int> adjlist[100001];
bool visited[100001];
int ind = 100000;
void dfs(int k)
{
    visited[k] = 1;
    for (int v : adjlist[k])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
    indices[k] = ind;
    ordering[ind--] = k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(ordering, 0, sizeof ordering);
    memset(visited, 0, sizeof visited);

    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        int w;
        cin >> w;
        while (w--)
        {
            int v;
            cin >> v;
            adjlist[i].push_back(v);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
    int base = 0;
    for (int i = 100001 - n; i < 100001; i++)
    {
        if (adjlist[ordering[i]].size() != 0)
        {
            base = ordering[i];
            break;
        }
    }

    for (int i = 100001 - n; i < 100001; i++)
    {
        cout << ordering[i] << " ";
    }
    cout << '\n';

    int arr[n + 1];
    memset(arr, -1, sizeof arr);
    for (int i = 1; i <= n; i++)
    {
        if (i == base)
        {
            arr[i] = 0;
        }
        else
        {
            for (int j = indices[i] - 1; j >= 100001 - n; j--)
            {
                bool found = false;
                for (int v : adjlist[ordering[j]])
                {
                    if (v == i)
                    {
                        arr[i] = ordering[j];
                        found = true;
                        break;
                    }
                }
                if (found)
                {
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == -1)
        {
            arr[i] = base;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << "\n";
    }
}