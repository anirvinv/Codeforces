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
    F(i, 0, n) cin >> a[i];
    int i = 0;
    while (i < n && a[i] == 0) {
        i++;
    }
    ll ans = 0;
    ll total = 0;
    a[n - 1] = 1;
    while (i < n) {
        // at this point, a[i] != 0
        i++;
        ll zeroes = 0;
        while (i < n && a[i] == 0) {
            zeroes++;
            i++;
        }
        ans += zeroes;
    }
    ans += accumulate(a.begin(), a.end() - 1, 0ll);
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