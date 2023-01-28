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
    set<ll> as;
    F(i, 0, n) { cin >> a[i]; }
    F(i, 0, k) { as.insert(a[i]); }
    auto it = next(as.rbegin(), k - 1);
    F(i, k, n) {
        cout << *it << '\n';
        as.insert(a[i]);
        if (a[i] > *it) {
            it--;
        }
    }
    cout << *(it) << '\n';
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