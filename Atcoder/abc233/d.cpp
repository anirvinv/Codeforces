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
    G(n) G(k);
    vector<ll> a(n);
    vector<ll> p(n);
    map<ll, ll> occ;
    F(i, 0, n) cin >> a[i];
    ll sum = 0;
    F(i, 0, n) {
        sum += a[i];
        p[i] = sum;
    }
    ll ans = 0;
    // sliding window doesnt work
    // p[j] - k == p[i - 1]
    F(i, 0, n) {
        ans += occ[p[i] - k];
        occ[p[i]]++;
    }
    F(i, 0, n) { ans += p[i] == k; }
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