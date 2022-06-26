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
    F(i, 0, n) cin >> a[i];
    if (n == 1) {
        cout << a[0] + (k - 1) * 1 << '\n';
        return;
    }
    if (k < n) {
        vector<ll> pre(n);
        pre[0] = a[0];
        F(i, 1, n) { pre[i] = pre[i - 1] + a[i]; }
        ll ans = 0;
        F(i, 0, n - k) {
            ll temp = 0;
            if (i == 0) {
                temp = pre[i + k - 1];
            } else {
                temp = pre[i + k - 1] - pre[i - 1];
            }
            temp += (k * (k - 1)) / 2;
            ans = max(ans, temp);
        }
        cout << ans << '\n';

    } else {
        ll ans = 0;
        F(i, 0, n) { ans += a[i] + i; }
        ans +=
            ((k - n) / n) * (((n * (n + 1)) / 2) - 1 + ((n - 2) * (n - 1) / 2));

        F(i, 0, (k - n) % n) { ans += (i + 2) + i; }
        cout << ans << '\n';
    }
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