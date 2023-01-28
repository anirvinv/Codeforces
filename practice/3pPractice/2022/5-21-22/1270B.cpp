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

    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) >= 2) {
            cout << "YES" << '\n';
            cout << i + 1 << " " << i + 2 << '\n';
            return;
        }
    }
    cout << "NO" << '\n';


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