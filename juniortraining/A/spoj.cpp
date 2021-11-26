#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

ll cel(ll n, ll m, ll b)
{
    // returns number of integers from n, m inclusive divisible by b
    return m / b - (n - 1) / b;
}
ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

ll lcm(ll a, ll b, ll c, ll d, ll e)
{
    return lcm(lcm(lcm(lcm(a, b), c), d), e);
}

ll lcm(ll a, ll b, ll c)
{
    return lcm(lcm(a, b), c);
}
ll lcm(ll a, ll b, ll c, ll d)
{
    return lcm(lcm(lcm(a, b), c), d);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, a, d;
        cin >> n >> m >> a >> d;
        // ll a;
        ll w = a + d;
        ll x = a + (2 * d);
        ll y = a + (3 * d);
        ll z = a + (4 * d);

        // pie aids
        ll count = cel(n, m, a) + cel(n, m, w) + cel(n, m, x) + cel(n, m, y) + cel(n, m, z);
        count -= cel(n, m, lcm(a, w)) + cel(n, m, lcm(a, x)) + cel(n, m, lcm(a, y)) + cel(n, m, lcm(a, z)) + cel(n, m, lcm(w, x)) + cel(n, m, lcm(w, y)) + cel(n, m, lcm(w, z)) + cel(n, m, lcm(x, y)) + cel(n, m, lcm(x, z)) + cel(n, m, lcm(y, z));
        count += cel(n, m, lcm(a, w, x)) + cel(n, m, lcm(a, w, y)) + cel(n, m, lcm(a, w, z)) + cel(n, m, lcm(a, x, y)) + cel(n, m, lcm(a, x, z)) + cel(n, m, lcm(a, y, z)) + cel(n, m, lcm(w, x, y)) + cel(n, m, lcm(w, x, z)) + cel(n, m, lcm(w, y, z)) + cel(n, m, lcm(x, y, z));
        count -= cel(n, m, lcm(a, w, x, y)) + cel(n, m, lcm(a, w, x, z)) + cel(n, m, lcm(a, w, y, z)) + cel(n, m, lcm(a, x, y, z)) + cel(n, m, lcm(w, x, y, z));
        count += cel(n, m, lcm(a, w, x, y, z));

        cout << m - (n - 1) - count << endl;
    }
}