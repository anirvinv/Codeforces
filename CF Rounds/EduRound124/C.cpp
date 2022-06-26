#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<ll> a(n);
    F(i, n) { G(x) a[i] = x; }
    vector<ll> b(n);
    F(i, n) { G(x) b[i] = x; }
    ll c1 = LLONG_MAX, c2 = LLONG_MAX, c3 = LLONG_MAX, c4 = LLONG_MAX;
    F(i, n) {
        c1 = min(c1, abs(a[0] - b[i]));
        c2 = min(c2, abs(a[n - 1] - b[i]));
        c3 = min(c3, abs(b[0] - a[i]));
        c4 = min(c4, abs(b[n - 1] - a[i]));
    }
    ll cn1 = abs(a[0] - b[0]), cn2 = abs(a[n - 1] - b[n - 1]);
    ll cn3 = abs(a[n - 1] - b[0]), cn4 = abs(a[0] - b[n - 1]);

    ll ans = min({cn1 + cn2, cn3 + cn4, cn1 + c2 + c4, cn2 + c1 + c3,
                  cn3 + c1 + c4, cn4 + c2 + c3, c1 + c2 + c3 + c4});
    cout << ans << '\n';
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