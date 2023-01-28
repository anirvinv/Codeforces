#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) G(m) G(k);
    vector<ll> a(n);
    F(i, n) cin >> a[i];

    ll bag = m;
    for (int i = 0; i < n - 1; i++) {
        ll addition = 0;
        if (a[i] >= a[i + 1]) {
            addition = min(a[i] - (a[i + 1] - k), a[i]);
        }
        if (a[i] < a[i + 1]) {
            if (a[i + 1] - a[i] < k) {
                if (a[i + 1] - k <= 0) {
                    addition = a[i];
                }
                else {
                    addition = a[i] - (a[i + 1] - k);
                }
            }
            else if (a[i + 1] - a[i] > k) {
                if (a[i + 1] - a[i] - k > bag) {
                    cout << "NO\n";
                    return;
                }
                addition = -1 * (a[i + 1] - a[i] - k);
            }
        }
        bag += addition;
    }
    cout << "YES\n";

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