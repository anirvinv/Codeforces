#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve()
{
    ll n;
    int k;
    cin >> n >> k;
    if (n % 2 == 1)
    {
        cout << 1 << " " << (n - 1) / 2 << " " << (n - 1) / 2 << '\n';
    }
    else
    {
        if (n % 4 == 0)
        {
            cout << n / 2 << " " << n / 4 << " " << n / 4 << '\n';
        }
        else
        {
            cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2 << '\n';
        }
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