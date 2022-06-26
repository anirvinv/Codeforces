#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    ll a, b;
    cin >> a >> b;

    ll ans = 1e18;
    for (int i = 0; i <= 30; i++) {
        if (b == 1 && i == 0) {
            continue;
        }
        ll count = i;
        ll c = a;
        while (c) {
            c /= b + i;
            count++;
        }
        ans = min(count, ans);
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