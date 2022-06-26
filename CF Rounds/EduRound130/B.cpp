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
    vector<ll> p(n);
    F(i, 0, n) cin >> p[i];
    sort(all(p));
    vector<ll> suff(n);
    ll sum = 0;
    FFE(i, n - 1, 0) {
        sum += p[i];
        suff[i] = sum;
    }
    while (q--) {
        G(x) G(y);
        if (x != y) {
            cout << suff[n - x] - suff[n - (x - y)] << '\n';
        } else {
            cout << suff[n - x] << '\n';
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