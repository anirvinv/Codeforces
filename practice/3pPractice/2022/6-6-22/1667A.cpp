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
    F(i, 0, n) cin >> a[i];
    // go through the array deciding where the negatives end
    ll ans = LLONG_MAX;
    F(i, 0, n) {
        // i is where the 0 will be
        ll ta = 0;
        ll curr = 1;
        FFE(j, i - 1, 0) {
            if (j == i - 1) {
                curr = a[j];
                ta++;
            }
            else {
                ll val;
                if (curr % a[j] != 0) {
                    val = ((curr + a[j] - 1) / a[j]);
                }
                else {
                    val = (curr / a[j] + 1);
                }
                curr = a[j] * val;
                ta += val;
            }

        }
        curr = 1;
        F(j, i + 1, n) {
            if (j == i + 1) {
                curr = a[j];
                ta++;
            }
            else {
                ll val;
                if (curr % a[j] != 0) {
                    val = ((curr + a[j] - 1) / a[j]);
                }
                else {
                    val = (curr / a[j] + 1);
                }
                curr = a[j] * val;
                ta += val;
            }
        }
        ans = min(ans, ta);
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