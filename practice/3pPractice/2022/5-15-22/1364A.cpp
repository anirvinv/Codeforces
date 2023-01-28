#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {

    G(n) G(x);
    vector<ll> a(n);
    F(i, n) cin >> a[i];

    vector<ll> pref(n);
    vector<ll> suff(n);
    ll sum = 0;
    F(i, n) { sum += a[i]; pref[i] = sum; }
    sum = 0;
    for (int i = n - 1; i >= 0; i--) { sum += a[i]; suff[i] = sum; }
    if (sum % x != 0) {
        cout << n << '\n';
        return;
    }
    ll l = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] % x != 0) { l = i; break; }
    }
    ll r = -1 * INT_MAX;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] % x != 0) { r = i; break; }
    }
    ll length = max(n - (n - r), n - (l + 1));
    cout << (length > 0 ? length : -1) << '\n';

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