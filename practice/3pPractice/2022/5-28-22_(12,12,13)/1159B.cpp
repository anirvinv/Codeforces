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
    F(i, 0, n)cin >> a[i];
    ll ans = LLONG_MAX;
    if (n % 2 == 1) {
        ll count = n - 1;
        F(i, 0, n) {
            ans = min(ans, a[i] / count);
            if (i < n / 2) {
                count--;
            }
            else { count++; }
        }
    }
    else {
        ll count = n - 1;
        F(i, 0, n / 2) {
            ans = min(ans, a[i] / count);
            count--;
        }
        cout << '\n';
        F(i, n / 2, n) {
            count++;
            ans = min(ans, a[i] / count);
        }
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