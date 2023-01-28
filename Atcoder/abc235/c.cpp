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
void solve() {
    G(n) G(q);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    map<ll, vector<ll>> m;
    F(i, 0, n) { m[a[i]].push_back(i + 1); }
    while (q--) {
        G(x) G(k);
        if (k > m[x].size()) {
            cout << -1 << '\n';
        } else {
            cout << m[x][k - 1] << '\n';
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