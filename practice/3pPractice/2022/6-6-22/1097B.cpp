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
    G(n);
    vector<ll> a(n);
    ll sum = 0;
    F(i, 0, n) { cin >> a[i]; sum += a[i]; }
    FE(mask, 0, (1 << (n - 1))) {
        ll ts = 0;
        F(i, 0, n) {
            if (mask & (1 << i)) {
                ts -= a[i];
            }
            else {
                ts += a[i];
            }
        }
        if (ts % 360 == 0) {
            cout << "YES" << '\n';
            return;
        }

    }
    cout << "NO\n";

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