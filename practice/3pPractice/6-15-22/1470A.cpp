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
    vector<ll> k(n);
    vector<ll> c(m);
    F(i, 0, n) cin >> k[i];
    F(i, 0, m) cin >> c[i];
    sort(all(k));
    vector<ll> pre(m);
    ll sum = 0;
    F(i, 0, m) {
        sum += c[i];
        pre[i] = sum;
    }
    ll ans = LLONG_MAX;
    ll money = 0;
    FE(sz, 0, n) {
        // giving money to everyone in [0,sz)
        // giving presents to rest of them
            // if the number of presents isn't enough, then don't count that iteration
            // if number of people left > m: ls = -1 
        if (sz > 0) {
            money += c[k[sz - 1] - 1];
        }
        if (n - sz > m) {

            continue;
        }
        ll ls = money;
        if (n >= m) {
            if (n - sz - 1 < m && n - sz - 1 >= 0) {
                ls += pre[n - sz - 1];
            }
        }
        else {
            ls += pre[n - sz - 1];
        }
        ans = ls >= 0 ? min(ans, ls) : ans;
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