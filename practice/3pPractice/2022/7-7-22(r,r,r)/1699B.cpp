#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i,L,R) for (int i = (L); i < (R); i++)
#define FE(i,L,R) for (int i = (L); i <= (R); i++)
#define FF(i,L,R) for (int i = (L); i > (R); i--)
#define FFE(i,L,R) for (int i = (L); i >= (R); i--)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007 //998244353
void solve() {
    G(n) G(m);
    // reflecting basic 2x2 grid

    int grid[n][m];
    memset(grid, 0, sizeof grid);
    // 0 1
    // 1 0
    bool flip = 1;
    for (int i = 0; i < n - 1; i += 2) {
        for (int j = 0; j < m - 1; j += 2) {
            if (flip) {
                grid[i][j] = 0;
                grid[i][j + 1] = 1;
                grid[i + 1][j] = 1;
                grid[i + 1][j + 1] = 0;
            }
            else {
                grid[i][j] = 1;
                grid[i][j + 1] = 0;
                grid[i + 1][j] = 0;
                grid[i + 1][j + 1] = 1;
            }
            flip = !flip;
        }
        if ((m / 2) % 2 == 0) {
            flip = !flip;
        }
    }
    F(i, 0, n) {
        F(j, 0, m) {
            cout << grid[i][j] << " ";
        }
        cout << '\n';
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