#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if ((2 * b - c) > 0 && (2 * b - c) % a == 0)
    {
        cout << "YES" << '\n';
    }
    else if ((2 * b - a) > 0 && (2 * b - a) % c == 0)
    {
        cout << "YES" << '\n';
    }
    else if ((a + c) % 2 == 0 && ((a + c) / 2) % b == 0)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
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