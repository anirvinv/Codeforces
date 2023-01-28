#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) G(x) G(y);
    // x's place

    int x1 = 0, x2 = 1;
    int diff = 1;
    for (int i = 0; i < n - 1; i++) {
        // x's place
        for (int j = i + 1; j < n; j++) {
            //y's place
            ll fv = x + ((y - x) / (j - i)) * (-1 * i);
            if (((y - x) % (j - i) == 0) && (j - i) >= diff && fv > 0) {
                x1 = i;
                x2 = j;
                diff = j - i;
            }
        }
    }

    F(k, n) {
        // cout << 1 << ' ';
        cout << x + ((y - x) / (x2 - x1)) * (k - x1) << ' ';
    }
    cout << '\n';
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