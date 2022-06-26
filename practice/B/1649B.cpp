#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<ll> arr(n);
    ll mx = 0;
    ll sum = 0;
    F(i, n) { cin >> arr[i];sum += arr[i];mx = max(mx, arr[i]); }
    if (mx == 0) {
        cout << 0 << '\n';
        return;
    }
    sum -= mx;
    cout << max(1ll, mx - sum) << '\n';

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