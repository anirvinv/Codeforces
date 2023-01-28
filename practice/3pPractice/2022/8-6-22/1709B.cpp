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
    vector<ll> h(n);
    F(i, 0, n) cin >> h[i];
    ll damage = 0;
    vector<ll> pre = { 0 };
    vector<ll> suf = { 0 };
    F(i, 0, n - 1) {
        damage += max(0ll, h[i] - h[i + 1]);
        pre.push_back(damage);
    }
    damage = 0;
    FFE(i, n - 1, 1) {
        damage += max(0ll, h[i] - h[i - 1]);
        suf.push_back(damage);
    }
    reverse(all(suf));
    F(queries, 0, m) {
        G(s) G(t);
        s--;t--;
        if (s <= t) {
            cout << pre[t] - pre[s] << '\n';
        }
        else {
            cout << suf[t] - suf[s] << '\n';
        }
    }
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