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
bool inRange(ll x, ll i, ll n) {
    return x != i && x >= 0 && x < n;
}
void solve() {
    G(n) G(l) G(r);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    sort(all(a));
    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans += upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin();
        ans -= lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin();
    }
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // // t= 1;
    while (t--) {
        solve();
    }
}