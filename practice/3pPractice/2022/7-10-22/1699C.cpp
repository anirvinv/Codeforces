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
    vector<ll> idx(n);
    F(i, 0, n) {
        G(x);
        idx[x] = i;
    }
    ll ans = 1;
    ll l = idx[0], r = idx[0];
    F(i, 1, n) {
        if (idx[i] < l || idx[i] > r) {
            if (idx[i] < l) {
                l = idx[i];
            }
            else {
                r = idx[i];
            }
        }
        else {
            ans *= r - l + 1 - i;
            ans %= MOD;
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