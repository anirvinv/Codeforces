#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
void solve()
{
    ll n, x, t;
    cin >> n >> x >> t;
    ll first = 0;
    ll last = x * (n - 1);
    ll df = (t / x) * ((last - t + x - 1) / x + 1);
    if (last - t <= 0)
    {
        df = n - 1;
        df += max(0ll, ((n - 1) * (n - 2)) / 2);
    }
    else
    {
        df += (t / x * (t / x - 1)) / 2;
    }
    cout << df << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    // k= 1;
    while (k--)
    {
        solve();
    }
}