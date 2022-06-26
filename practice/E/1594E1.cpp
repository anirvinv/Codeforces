#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

ll power(ll a, ll b) {
    if (b == 0) {
        return 1;
    }
    ll N = 1000000007;
    ll ans = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            ans *= a;
            ans %= N;
        }
        a *= a;
        a %= N;
        b = b >> 1;
    }
    return ans;
}

void solve() {
    ll k;
    cin >> k;
    ll nodes = (1ll << k) - 1;
    ll ans = (6 * power(4, nodes - 1));
    cout << ans % 1000000007 << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}
