#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 998244353

ll factorial(ll n) {
    if (n == 0) return 1ll;
    ll ans = 1;
    for (ll i = 1; i <= n; i++) {
        ans *= i;
        ans %= MOD;
    }
    return ans;
}

void solve() {
    G(n);
    if (n % 2) {
        cout << 0 << '\n';
        // cout << (factorial(n / 2) * factorial((n + 1) / 2)) % MOD << '\n';
    } else {
        cout << (factorial(n / 2) * factorial(n / 2)) % MOD << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    while (t--) {
        solve();
    }
}