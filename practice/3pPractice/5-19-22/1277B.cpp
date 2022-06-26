#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {

    G(n);
    vector<ll> a(n);
    F(i, n) cin >> a[i];
    map<ll, ll> mp;
    F(i, n) {
        if (a[i] % 2 == 0) {
            ll count = 0;
            while (a[i] % 2 == 0) {
                a[i] /= 2;
                count++;
            }
            mp[a[i]] = max(mp[a[i]], count);
        }
    }
    ll ans = 0;
    for (auto iter = mp.begin(); iter != mp.end(); iter++) {
        ans += iter->second;
    }
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