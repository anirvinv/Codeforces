#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i, L, R) for (int i = (L); i < (R); i++)
#define FE(i, L, R) for (int i = (L); i <= (R); i++)
#define FF(i, L, R) for (int i = (L); i > (R); i--)
#define FFE(i, L, R) for (int i = (L); i >= (R); i--)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007  // 998244353
void solve() {
    G(n) G(m);
    ll grid[n][m];
    ll dpmin[n][m];
    memset(dpmin, 0, sizeof dpmin);
    ll dpmax[n][m];
    memset(dpmax, 0, sizeof dpmax);
    F(i, 0, n) {
        F(j, 0, m) { cin >> grid[i][j]; }
    }
    if ((n + m) % 2 == 0) {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0) {
                if (j == 0) {
                    dpmin[i][j] = grid[i][j];
                } else {
                    dpmin[i][j] = grid[i][j] + dpmin[i][j - 1];
                }
            } else if (j == 0) {
                dpmin[i][j] = grid[i][j] + dpmin[i - 1][j];
            } else {
                dpmin[i][j] =
                    grid[i][j] + min(dpmin[i - 1][j], dpmin[i][j - 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0) {
                if (j == 0) {
                    dpmax[i][j] = grid[i][j];
                } else {
                    dpmax[i][j] = grid[i][j] + dpmax[i][j - 1];
                }
            } else if (j == 0) {
                dpmax[i][j] = grid[i][j] + dpmax[i - 1][j];
            } else {
                dpmax[i][j] =
                    grid[i][j] + max(dpmax[i - 1][j], dpmax[i][j - 1]);
            }
        }
    }
    if ((dpmin[n - 1][m - 1] <= 0 && dpmin[n - 1][m - 1] % 2 == 0 &&
         dpmax[n - 1][m - 1] >= 0) ||
        (dpmax[n - 1][m - 1] >= 0 && dpmax[n - 1][m - 1] % 2 == 0 &&
         dpmin[n - 1][m - 1] <= 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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