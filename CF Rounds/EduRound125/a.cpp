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
    ll x, y;
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << 0 << '\n';
        return;
    }
    if (x == 0 || y == 0) {
        cout << 1 << '\n';
        return;
    }
    if (((ll)sqrt(x * x + y * y) * (ll)sqrt(x * x + y * y)) == x * x + y * y) {
        cout << 1 << '\n';
        return;
    }
    cout << 2 << '\n';
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