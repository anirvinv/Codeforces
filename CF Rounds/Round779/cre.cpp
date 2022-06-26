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
    vector<ll> c(n);
    for (ll &a : c) cin >> a;

    if (count(all(c), 1) - 1 != 0) {
        cout << "NO" << '\n';
        return;
    }

    int p = find(all(c), 1) - c.begin();
    rotate(c.begin(), c.begin() + p, c.end());
    F(i, n - 1) {
        if (c[i + 1] - c[i] > 1) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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