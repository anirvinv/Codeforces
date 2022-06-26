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
    G(x) G(y);
    ll curr = max(x, y);
    F(i, n - 1) {
        G(x) G(y);
        if (min(x, y) > curr) {
            cout << "NO" << '\n';
            return;
        }
        curr = max(x, y) <= curr ? max(x, y) : min(x, y);
    }
    cout << "YES" << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}