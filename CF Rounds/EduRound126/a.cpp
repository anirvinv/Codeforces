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
    vector<ll> b(n);
    F(i, n) cin >> a[i];
    F(i, n) cin >> b[i];
    F(i, n) {
        if (a[i] > b[i]) {
            ll temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }

    ll ans = 0;
    F(i, n - 1) { ans += abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]); }
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