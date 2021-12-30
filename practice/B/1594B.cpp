#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)

ll power(ll a, ll b, ll m)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % m;
        }
        b /= 2;
        a = (a * a) % m;
    }
    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    ll modulo = 1000000007;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll num = 0;
        for (int i = 0; i <= ceil(log2(k)); i++)
        {
            if ((1 << i) & k)
            {
                num += power(n, i, modulo);
                num %= modulo;
            }
        }
        cout << num << '\n';
    }
}