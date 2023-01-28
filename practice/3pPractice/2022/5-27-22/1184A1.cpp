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
    G(r);
    if (r % 2 == 0) {
        cout << "NO\n";
        return;
    }
    ll upto = min(r, (ll)(1e8));
    F(i, 1, upto) {
        ll x = i;
        // find y
        ll res = r - 1 - x * x - x;
        if (res % (2 * x) == 0) {
            ll y = res / (2 * x);
            if (x > 0 && y > 0) {
                cout << x << " " << y << '\n';
                return;
            }
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