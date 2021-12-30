#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)

vector<int> adjlist[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    fo(i, m)
    {
        int v1, v2;
        cin >> v1 >> v2;
        adjlist[v1].push_back(v2);
        adjlist[v2].push_back(v1);
    }

    bool rip = false;
    for (int i = 1; i <= n; i++)
    {
        if (adjlist[i].size() > 2)
        {
            rip = true;
            break;
        }
        else if (adjlist[i].size() == 2)
        {
            rip = adjlist[i][0] == 1 || adjlist[i][1] == 1;
            if (!rip)
            {
                break;
            }
        }
    }
    if (rip)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}