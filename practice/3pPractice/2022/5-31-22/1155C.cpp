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
    vector<ll> x(n);
    F(i, 0, n) cin >> x[i];
    vector<ll> p(m);
    int one = -1;
    F(i, 0, m) {
        cin >> p[i];
        if (p[i] == 1) one = i + 1;
    }
    if (one != -1) {
        cout << "YES\n";
        cout << x[0] << " " << one << '\n';
        return;
    }
    ll g = x[1] - x[0];
    F(i, 1, n - 1) {
        g = __gcd(g, x[i + 1] - x[i]);
    }
    if (g == 1) {
        cout << "NO" << '\n';
        return;
    }
    F(i, 0, m) {
        if (g % p[i] == 0) {
            cout << "YES\n";
            cout << x[0] << " " << i + 1 << '\n';
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