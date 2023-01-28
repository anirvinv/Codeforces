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
    G(n);
    vector<ll> x(n);
    vector<ll> y(n);
    F(i, 0, n) { cin >> x[i]; }
    F(i, 0, n) { cin >> y[i]; }
    vector<ll> xy(n);
    F(i, 0, n) { xy[i] = y[i] - x[i]; }
    sort(all(xy));
    int l = 0, r = n - 1;
    ll ans = 0;
    while (l < r) {
        if (xy[l] + xy[r] >= 0) {
            l++;
            r--;
            ans++;
        } else {
            l++;
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