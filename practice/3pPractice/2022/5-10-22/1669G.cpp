#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) G(m);
    string grid[n];
    F(i, n) {
        cin >> grid[i];
    }

    for (int i = n - 2; i >= 0; i--) {
        string s = grid[i];
        for (int j = 0; j < m; j++) {
            if (s[j] == '*') {
                for (int k = i; k < n - 1; k++) {
                    if (grid[k + 1][j] == '.') {
                        grid[k][j] = '.';
                        grid[k + 1][j] = '*';
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }

    F(i, n) {
        F(j, m) {
            cout << grid[i][j];
        }
        cout << '\n';
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