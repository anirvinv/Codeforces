#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(q);
    F(asdf, q) {
        G(n) G(m);
        ll repeat = 10ll / __gcd(m, 10ll);
        if (m % 10 == 0 || n < m) {
            cout << 0 << '\n';
            continue;
        }
        ll ans = 0;
        if (n >= repeat * m) {
            ll sum = 0;
            F(i, repeat) sum += (m * (i + 1)) % 10;
            ans = sum * (n / (m * repeat));
            ll start = (m * repeat) * (n / (m * repeat)) + 1;
            // debug(n - start);
            for (ll i = m * ((start + m - 1) / m); i <= m * (n / m); i += m) {
                if (i % m == 0) ans += i % 10;
            }
            cout << ans << '\n';
        }
        else {
            F(i, n / m) {
                ans += ((i + 1) * m) % 10;
            }
            cout << ans << '\n';
        }
    }
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