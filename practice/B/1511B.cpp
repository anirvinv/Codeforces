#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    ll gc = 1;
    fo(i, c - 1)
    {
        gc *= 10;
    }
    ll y = 1;
    fo(i, b - 1)
    {
        y *= 10;
    }
    ll x = 1;
    fo(i, a - 1)
    {
        x *= 10;
    }
    x += gc;

    cout << x << ' ' << y << '\n';
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