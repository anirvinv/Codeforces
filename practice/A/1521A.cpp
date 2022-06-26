#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    ll a, b;
    cin >> a >> b;

    if (b == 1)
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
        if (b == 2)
        {
            b = 4;
        }
        cout << a << ' ' << a * (b - 1) << ' ' << a * b << '\n';
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