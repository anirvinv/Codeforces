#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<ll> a(n);
    F(i, n) cin >> a[i];
    ll ans = 360;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            ll p1 = 0, p2 = 0;
            F(k, i) {
                p1 += a[k];
            }
            for (int k = j; k < n; k++) {
                p1 += a[k];
            }
            for (int k = i; k < j; k++) {
                p2 += a[k];
            }
            ans = min(ans, abs(p1 - p2));
        }
    }
    cout << ans << '\n';

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