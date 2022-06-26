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
    G(n) G(x);
    multiset<ll> a;
    vector<ll> b(n);
    F(i, n) {
        G(v) a.insert(v);
        b[i] = v;
    }
    sort(all(b));
    ll ans = 0;
    for (ll e : b) {
        auto iter1 = a.find(e);
        if (iter1 != a.end()) {
            auto iter2 = a.find(x * e);
            auto iter3 = a.find(e / x);
            a.erase(iter1);
            if (iter2 != a.end()) {
                a.erase(iter2);
            } else if (e % x == 0 && iter3 != a.end()) {
                a.erase(iter3);
            } else {
                ans++;
            }
        }
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