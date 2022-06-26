#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
int ew[100][100];
void solve() {
    G(E) G(W);
    F(i, E) {
        F(j, W) { cin >> ew[i][j]; }
    }
    vector<int> curr(E);
    ll ans = W;
    F(j, W) { curr.push_back(ew[0][j]); }
    for (int i = 1; i < E; i++) {
        F(j, W) {
            if (ew[i][j] != curr[j]) {
                ans += 2 * (W - j);
                for (int k = j; k < W; k++) {
                    curr[j] = ew[i][j];
                }
                break;
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