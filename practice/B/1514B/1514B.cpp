#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)

ll nChoosek(int n, int k)
{
    ll result = 1;
    if (k == 0)
    {
        return result;
    }
    for (int i = n; i > k; i--)
    {
        result *= i;
    }
    for (int i = 2; i <= (n - k); i++)
    {
        result /= i;
    }
    return result;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll highest = (1ll << k) - 1;
    // # of digits
    int digits = k;
    // sum is the number of ways we can split the number up
    ll sum = 0;
    for (int i = 1; i <= digits - 1; i++)
    {
        sum += nChoosek(digits - 1, i);
    }
    cout << "digits: " << digits << '\n';
    cout << "sum: " << sum << '\n';
    cout << ((sum * n * (n - 1)) + n) % (int)((1e9) + 7) << '\n';
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