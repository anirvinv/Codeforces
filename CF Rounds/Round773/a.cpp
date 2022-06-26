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
    ll p[3][2];
    F(i, 3) {
        cin >> p[i][0];
        cin >> p[i][1];
    }
    F(i, 3) {
        F(j, 3) {
            if (i != j && p[i][1] == p[j][1] && p[i][1] > p[3 - (i + j)][1]) {
                // debug(3 - i - j);
                cout << abs(p[i][0] - p[j][0]) << '\n';
                return;
            }
        }
    }
    cout << 0 << '\n';
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