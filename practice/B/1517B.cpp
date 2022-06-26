#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> paths(n);

    fo(i, n)
    {
        vector<int> p(m);
        fo(j, m)
        {
            cin >> p[j];
        }
        paths[i] = p;
    }
    int traversalMap[n][m];
    memset(traversalMap, -1, sizeof traversalMap);
    // -1 = unvisited
    // 0 = needs to be visited
    // 1 = visited
    for (auto &v : paths)
    {
        sort(all(v), greater<int>());
    }
    vector<vector<int>> players(m);
    fo(i, m)
    {
        vector<int> player;
        int smallest = INT_MAX;
        fo(j, n)
        {
            smallest = min(smallest, paths[j][paths[j].size() - 1]);
        }
        // find index of smallest
        int cptInd = -1;
        fo(j, n)
        {
            if (paths[j][paths[j].size() - 1] == smallest)
            {
                cptInd = j;
                traversalMap[cptInd][paths[cptInd].size() - 1] = 0;
                break;
            }
        }

        fo(j, n)
        {
            if (j != cptInd)
            {
                int k = 0;
                // if the thing is in the cptind, then it has to be 0 so you gotta do that
                while (traversalMap[j][k] == 1)
                {
                    k++;
                }
                traversalMap[j][k] = 1;
                player.push_back(paths[j][k]);
            }
            else
            {
                // if the thing is in the cptind, then it has to be 0 so you gotta do that
                traversalMap[j][paths[j].size() - 1] == 1;
                player.push_back(paths[j][paths[j].size() - 1]);
                paths[j].pop_back();
            }
        }
        players[i] = player;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = players.size() - 1; j >= 0; j--)
        {
            cout << players[j][i] << ' ';
        }
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--)
    {
        solve();
    }
}