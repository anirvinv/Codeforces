#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

ll getS(ll x) {
    return x * (x + 1) / 2;
}

void solve() {
    G(x);
    ll ans = 0;
    for (int i = 1; getS((1LL << i) - 1) <= x; i++) {
        ans++;
        x -= getS((1LL << i) - 1);
    }
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