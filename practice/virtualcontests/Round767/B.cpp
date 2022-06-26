#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int l, r, k;
    cin >> l >> r >> k;

    if (l == r && l != 1) {
        cout << "YES" << '\n';
        return;
    }
    ll numodds = 0;
    if (l % 2 == 0) {
        numodds = (r - l + 1) / 2;
    } else {
        numodds = (r - l + 2) / 2;
    }

    if (k >= numodds) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
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