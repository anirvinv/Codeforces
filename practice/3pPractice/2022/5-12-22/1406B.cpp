#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    // all negative --> only way the answer is negative
    G(n);
    vector<ll> a(n);
    F(i, n) {
        cin >> a[i];
    }
    sort(all(a));

    ll  ans = LLONG_MIN;
    for (int i = 0; i <= 5; i++) {
        ll temp = 1;
        // temp *= a[n - 5] * a[n - 4] * a[n - 3] * a[n - 2] * a[n - 1];
        for (int j = n - 1 + i; j >= n - 5 + i; j--) {
            temp *= a[j % n];
        }
        ans = max(ans, temp);
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