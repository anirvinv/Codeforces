#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i, L, R) for (int i = (L); i < (R); i++)
#define FE(i, L, R) for (int i = (L); i <= (R); i++)
#define FF(i, L, R) for (int i = (L); i > (R); i--)
#define FFE(i, L, R) for (int i = (L); i >= (R); i--)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007  // 998244353

ll dl(ll x) {
    ll ans = 0;
    while (x) {
        x /= 10;
        ans++;
    }
    return ans;
}
void solve() {
    G(n);
    vector<ll> a(n);
    vector<ll> b(n);
    F(i, 0, n) cin >> a[i];
    F(i, 0, n) cin >> b[i];
    multiset<ll> as;
    multiset<ll> bs;
    vector<ll> c;
    vector<ll> d;
    for (ll e : a) {
        as.insert(e);
    }
    for (ll e : b) {
        if (as.find(e) != as.end()) {
            as.erase(as.find(e));
        } else {
            bs.insert(e);
        }
    }
    ll ans = 0;

    for (ll e : as) {
        if (e >= 10) {
            c.push_back(dl(e));
            ans++;
        } else {
            c.push_back(e);
        }
    }
    for (ll e : bs) {
        if (e >= 10) {
            d.push_back(dl(e));
            ans++;
        } else {
            d.push_back(e);
        }
    }
    as.clear();
    bs.clear();
    for (ll e : c) {
        as.insert(e);
    }
    for (ll e : d) {
        if (as.find(e) != as.end()) {
            as.erase(as.find(e));
        } else {
            bs.insert(e);
        }
    }
    for (ll e : as) {
        if (e > 1) {
            ans++;
        }
    }
    for (ll e : bs) {
        if (e > 1) {
            ans++;
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