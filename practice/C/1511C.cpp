#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    bool seen[51];
    memset(seen, 0, sizeof seen);
    int unique = 0;
    fo(i, n)
    {
        cin >> a[i];
        if (!seen[a[i]])
        {
            seen[a[i]] = 1;
            unique++;
        }
    }
    memset(seen, 0, sizeof seen);
    int uniqueSize = 0;
    vector<int> ac;
    for (int i = 0; i < n; i++)
    {
        if (!seen[a[i]])
        {
            seen[a[i]] = true;
            uniqueSize++;
        }
        ac.push_back(a[i]);
        if (uniqueSize == unique)
        {
            break;
        }
    }
    reverse(all(ac));

    fo(i, q)
    {
        int qu;
        cin >> qu;
        int idx = 0;
        int value = 0;
        for (int j = ac.size() - 1; j >= 0; j--)
        {
            if (ac[j] == qu)
            {
                value = ac[j];
                idx = j;
                break;
            }
        }
        ac.erase(ac.begin() + idx);
        ac.push_back(value);
        cout << ac.size() - idx << ' ';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}