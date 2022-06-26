#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll k, x;
    cin >> k >> x;

    if (x >= (k * (k + 1) / 2 + k * (k - 1) / 2)) {
        cout << 2 * k - 1 << '\n';
    } else if (x >= k * (k + 1) / 2) {
        x -= k * (k + 1) / 2;
        ll lo = -1;
        ll hi = k + 1;
        bool equal = false;
        while (hi - lo > 1) {
            ll mid = lo + (hi - lo) / 2;
            ll val = k * mid - ((mid * (mid + 1)) / 2);

            if (val < x) {
                lo = mid;
            } else {
                hi = mid;
            }
        }
        ll messages = k + hi;
        cout << messages << '\n';

    } else {
        ll val = (ll)sqrt(2 * x);
        ll prod = val * (val + 1) / 2;
        while (prod < x) {
            val++;
            prod = val * (val + 1) / 2;
        }
        cout << val << '\n';
    }
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