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
    G(r) G(c) G(n) G(k);
    vector<pll> v(n);
    F(i, 0, n) { G(x) G(y); v[i] = { x,y }; }
    // row start, row end
    // col start, col end
    ll ans = 0;
    FE(rs, 1, r) {
        FE(re, rs, r) {
            FE(cs, 1, c) {
                FE(ce, cs, c) {
                    // sub rectangle [rs, re] x [cs, ce]
                    // check every point and see if viola exists
                    ll violas = 0;
                    for (ll i = rs; i <= re; i++) {
                        for (ll j = cs; j <= ce; j++) {
                            violas += (find(all(v), make_pair(i, j)) != v.end());
                        }
                    }
                    ans += violas >= k;
                }
            }
        }
    }
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