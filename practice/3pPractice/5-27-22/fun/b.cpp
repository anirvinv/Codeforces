#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i,L,R) for (int i = (L); i < (R); i++)
#define FE(i,L,R) for (int i = (L); i <= (R); i++)
#define FF(i,L,R) for (int i = (L); i > (R); i--)
#define FFE(i,L,R) for (int i = (L); i >= (R); i--)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007 //998244353
void solve() {
    G(n) G(k);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    ll ma = -1;
    ll mi = INT_MAX;
    F(i, 0, n) {
        ma = max(ma, a[i]);
        mi = min(mi, a[i]);
    }
    if ((ma - mi + 1) / 2 > k) {
        cout << -1 << '\n';
        return;
    }
    if (ma - mi <= k) {
        cout << mi + k << '\n';
        return;
    }
    else {
        cout << max(mi + k, mi + (ma - mi + 1) / 2) << '\n';
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