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
    // x==0 or y == 0
    G(n) G(x) G(y);
    if (min(x, y) != 0 || max(x, y) == 0) {
        cout << "-1\n";
        return;
    }
    ll w = max(x, y);
    // assume 2 won the first one
    if ((n - 1) % w != 0) {
        cout << "-1\n";
        return;
    }
    for (int i = 2; i <= n; i += w) {
        F(j, 0, w) {
            cout << i << " ";
        }
    }
    cout << '\n';

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