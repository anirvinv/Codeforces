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
    ll l, r, a;
    cin >> l >> r >> a;

    if (a > r || a == 1) {
        cout << r << '\n';
        return;
    }

    ll val = (a * (r / a)) - 1;

    if (val >= l && val <= r) {
        cout << max((val / a) + (val % a), (r / a) + (r % a)) << '\n';
        return;
    }
    cout << (r / a) + (r % a) << '\n';
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