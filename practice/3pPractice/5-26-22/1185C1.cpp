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

    G(n) G(m);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    vector<ll> pre(n);
    ll sum = 0;
    F(i, 0, n) { sum += a[i]; pre[i] = sum; }
    F(i, 0, n) {
        if (pre[i] > m) {
            vector<ll> mx;
            F(j, 0, i) {
                mx.push_back(a[j]);
            }
            sort(all(mx));
            ll ans = 0;
            sum = pre[i];
            while (!mx.empty() && sum > m) {
                sum -= mx.back();
                ans++;
                mx.pop_back();
            }
            cout << ans << ' ';
        }
        else {
            cout << 0 << ' ';
        }
    }
    cout << '\n';
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