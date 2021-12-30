#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, a, b, p, q, r, s;
    cin >> n >> a >> b >> p >> q >> r >> s;

    for (ll i = p; i <= q; i++)
    {
        for (ll j = r; j <= s; j++)
        {
            if (j - i == b - a)
            {
                cout << "#";
            }
            else if (a + b == i + j)
            {

                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        cout << '\n';
    }
}