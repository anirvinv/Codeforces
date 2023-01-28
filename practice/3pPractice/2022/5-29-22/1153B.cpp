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
    G(n) G(m) G(h);
    vector<ll> rowHeights(n);
    vector<ll> colHeights(m);
    F(i, 0, m) cin >> colHeights[i];
    F(i, 0, n) cin >> rowHeights[i];
    int grid[n][m];
    F(i, 0, n) F(j, 0, m) cin >> grid[i][j];
    vector<ll> colcpy(colHeights);
    FFE(i, n - 1, 0) {
        F(j, 0, m) {
            if (grid[i][j] == 1 && colcpy[j] && colcpy[j] <= rowHeights[i]) {
                grid[i][j] = colcpy[j];
                colcpy[j] = 0;
            }
        }
    }
    FFE(j, m - 1, 0) {
        F(i, 0, n) {
            if (grid[i][j] == 1 && rowHeights[i] && rowHeights[i] <= colHeights[j]) {
                grid[i][j] = rowHeights[i];
                rowHeights[i] = 0;
            }

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
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}