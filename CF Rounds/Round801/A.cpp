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
    F(i, 0, n) {
        F(j, 0, m) { cin >> grid[i][j]; }
    }
    ll mx = grid[0][0];
    ll i1 = 0, j1 = 0;
    F(i, 0, n) {
        F(j, 0, m) {
            if (grid[i][j] > mx) {
                mx = grid[i][j];
                i1 = i;
                j1 = j;
            }
        }
    }
    if (i1 > 0 && i1 < n - 1) {
        n = max(n - (i1), (i1 + 1));
    }
    if (j1 > 0 && j1 < m - 1) {
        m = max(m - (j1), (j1 + 1));
    }
    cout << n * m << '\n';
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