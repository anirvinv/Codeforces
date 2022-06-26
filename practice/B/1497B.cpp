#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    map<int, int> occ;
    fo(i, n)
    {
        cin >> arr[i];
        arr[i] %= m;
        if (arr[i] != 0)
        {
            occ[arr[i]]++;
        }
    }
    bool zero = false;
    int ans = 0;
    fo(i, n)
    {
        if (arr[i] == 0)
        {
            zero = true;
            break;
        }
    }
    if (zero)
    {
        ans++;
    }

    for (auto &c : occ)
    {
        if (c.first * 2 == m)
        {
            ans++;
        }
        /*
            first condition is to prevent over counting in a very efficient way
            if c.first is more than m/2 and m - c.first exists, it means that
            it would have already been counted on the way up
        */
        else if (2 * c.first < m || occ.find(m - c.first) == occ.end())
        {
            ans += max(1, abs(c.second - occ[m - c.first]));
        }
    }

    cout << ans << '\n';
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