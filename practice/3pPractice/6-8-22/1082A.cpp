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
    G(n) G(x) G(y) G(d);
    if ((y - x) % d == 0) {
        cout << abs((y - x) / d) << '\n';
        return;
    }
    if ((y - 1) % d == 0 || (n - y) % d == 0) {
        if ((n - y) % d != 0) {
            cout << abs((x - 1 + d - 1) / d + (y - 1) / d) << '\n';
        }
        else if ((y - 1) % d != 0) {

            cout << abs((n - x + d - 1) / d + (n - y) / d) << '\n';
        }
        else {

            cout << min(abs((n - x + d - 1) / d + (n - y) / d), abs((x - 1 + d - 1) / d + (y - 1) / d)) << '\n';
        }
    }
    else {
        cout << -1 << '\n';
        return;
    }


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