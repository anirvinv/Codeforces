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
    if (n % 2 == 0) {
        // NS EW NS EW NS EW
        // -- > you can do all horizontal positions from EEE to WWW so 0 to 3 which is 4 positions
        // -- > you can do all vertical positions from NNN to SSS so 0 to 3 which is 4 positions
        cout << (n / 2 + 1) * (n / 2 + 1) << '\n';
    }
    else {
        ll k = n / 2;
        cout << 2 * (k + 1) * (k + 2) << '\n';
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