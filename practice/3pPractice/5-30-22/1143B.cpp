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

ll power(ll a, ll b) {
    if (!b) return 1;
    ll ans = 1;
    while (b--) {
        ans *= a;
    }
    return ans;
}

void solve() {
    G(n);
    ll ans = 1;
    ll temp = n;
    if (n < 10) {
        cout << n << '\n';
        return;
    }
    while (temp) {
        ans *= temp % 10;
        temp /= 10;
    }
    int place = 0;
    while (place <= 9) {
        temp = n;
        temp = temp / (power(10, place)) * (power(10, place)) - 1;
        if (temp == -1) {
            break;
        }
        ll tans = 1;
        while (temp) {
            tans *= temp % 10;
            temp /= 10;
        }
        ans = max(ans, tans);
        place++;
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