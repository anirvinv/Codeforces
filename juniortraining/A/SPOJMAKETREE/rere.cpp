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

const int SIZE = 100001;
vector<int> adjlist[SIZE];
bool visited[SIZE];
int ordering[SIZE];
int ind = 1;
map<int, int> indices;
void topological_sort(int v)
{
    if (!visited[v])
    {
        visited[v] = 1;
        for (int k : adjlist[v])
        {
            if (!visited[k])
            {
                topological_sort(k);
            }
        }
        // reverse order
        indices[v] = ind;
        ordering[ind++] = v;
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(visited, 0, sizeof visited);
    memset(ordering, 0, sizeof ordering);

    int n, k;
    cin >> n >> k;
    bool adjMatrix[n + 1][n + 1];
    memset(adjMatrix, 0, sizeof adjMatrix);
    for (int i = 1; i <= k; i++)
    {
        int w;
        cin >> w;
        while (w--)
        {
            int v;
            cin >> v;

            adjlist[i].push_back(v);
            adjMatrix[i][v] = true;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            topological_sort(i);
        }
    }
    int base = 0;
    int ord[n + 1];
    // getting the actual order
    for (int i = 1; i <= n; i++)
    {
        ord[n - i + 1] = ordering[i];
    }
    // finding left most node that has connections to be the root node
    for (int i = 1; i <= n; i++)
    {
        if (adjlist[ord[i]].size() > 0)
        {
            base = ord[i];
            break;
        }
    }
    // setting all "free floating" nodes to be connected to root node
    for (int i = 1; i <= n; i++)
    {
        if (adjlist[ord[i]].size() == 0)
        {
            adjMatrix[base][i] = true;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        int numIndex = n - indices[i] + 1;
        if (i == base)
        {
            cout << 0 << '\n';
        }
        else
        {
            for (int j = numIndex - 1; j >= 0; j--)
            {
                if (j == 0)
                {
                    cout << base << '\n';
                }
                else if (adjMatrix[ord[j]][i])
                {
                    cout << ord[j] << '\n';
                    break;
                }
            }
        }
    }
}