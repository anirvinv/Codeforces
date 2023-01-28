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
long double sqrd(long double x) { return x * x; }
void solve() {
    G(n);
    vector<pair<long double, long double>> pts(n);
    F(i, 0, n) {
        long double x, y;
        cin >> x >> y;
        pts[i] = {x, y};
    }
    long double ans = -1;
    F(i, 0, n - 1) {
        F(j, i + 1, n) {
            ans = max(ans, sqrt(sqrd(pts[i].first - pts[j].first) +
                                sqrd(pts[i].second - pts[j].second)));
        }
    }
    cout << setprecision(20) << ans << '\n';
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