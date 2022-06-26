#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    // we gotta turn off k bits along the entire array.
    // So for the first bit we have n options, second bit
    // we have n options, third bit we have n options....
    // because we can technically turn off all the bits in one number
    // so answer is n^k

    int MOD = (1e9) + 7;

    int n, k;
    cin >> n >> k;

    ll res = 1;
    for (int i = 0; i < k; i++)
    {
        res *= n;
        res %= MOD;
    }
    cout << res << '\n';
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