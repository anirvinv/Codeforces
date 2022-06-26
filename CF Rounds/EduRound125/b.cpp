#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) G(B) G(x) G(y);

    vector<ll> a(n + 1);
    a[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        a[i] = max(a[i - 1] + x, a[i - 1] - y) > B
                   ? min(a[i - 1] + x, a[i - 1] - y)
                   : max(a[i - 1] + x, a[i - 1] - y);
    }
    ll sum = 0;
    F(i, n + 1) { sum += a[i]; }
    cout << sum << '\n';
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