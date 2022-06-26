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
    G(n);
    string a;
    string g;
    cin >> a;
    cin >> g;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (g[i] == '1') {
            if (a[i] == '0') {
                ans++;
                a[i] = '2';
            } else if (i - 1 >= 0 && a[i - 1] == '1') {
                ans++;
                a[i - 1] = '2';
            } else if (i + 1 < n && a[i + 1] == '1') {
                ans++;
                a[i + 1] = '2';
            }
        }
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