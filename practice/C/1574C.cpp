#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) vector<ll> h(n);
    ll sum = 0;
    F(i, n) {
        cin >> h[i];
        sum += h[i];
    }
    G(m) vector<pair<ll, ll>> d(m);
    sort(all(h));
    F(i, m) { G(x) G(y) d[i] = make_pair(x, y); }
    for (auto p : d) {
        ll x = p.first;
        ll y = p.second;
        auto iter1 = lower_bound(all(h), x) - 1;
        if (iter1 < h.begin()) {
            iter1 = h.begin();
        }
        auto iter2 = lower_bound(all(h), x);
        if (iter2 == h.end()) {
            iter2 = h.end() - 1;
        }
        auto iter3 = upper_bound(all(h), x);
        if (iter3 == h.end()) {
            iter3 = h.end() - 1;
        }
        ll lb = *iter1;
        ll ub = *iter2;
        ll uu = *iter3;
        ll hero = lb;
        ll def = sum - hero;
        ll coins = max(0ll, y - def) + max(0ll, x - hero);
        hero = ub;
        def = sum - hero;
        coins = min(coins, max(0ll, y - def) + max(0ll, x - hero));
        hero = uu;
        def = sum - hero;
        coins = min(coins, max(0ll, y - def) + max(0ll, x - hero));
        cout << coins << '\n';
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