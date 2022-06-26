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

    G(n) G(h);
    vector<ll>a(n);
    F(i, 0, n) cin >> a[i];
    // n^2 approach
    ll ans = 0;
    F(i, 0, n) {
        vector<ll> c;
        FE(j, 0, i) {
            c.push_back(a[j]);
        }
        sort(all(c));
        reverse(all(c));
        // for (ll e : c) {
        //     cout << e << " ";
        // }
        // cout << '\n';
        ll hr = h;
        ll la = 0;
        bool broken = false;
        for (int k = 1; k < c.size(); k += 2) {
            if (max(c[k], c[k - 1]) <= hr) {
                la += 2;
                hr -= max(c[k], c[k - 1]);
            }
            else if (c[k] <= hr) {
                la++;
                ans = max(ans, la);
                broken = true;
                break;
            }
            else {
                break;
                broken = true;
            }
            if (k == c.size() - 1) {
                ans = max(ans, la);
            }
        }
        if (!broken && c.size() % 2 == 1) {
            if (c.back() <= hr) {
                la++;
                ans = max(ans, la);
            }
        }
        if (la != c.size()) break;
        // debug(la);
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