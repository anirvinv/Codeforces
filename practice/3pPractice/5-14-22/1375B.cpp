#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
ll N, M;
int squaresAround(int i, int j) {
    int ans = 0;
    if (i < N - 1) {
        ans++;
    }
    if (i > 0 && N - 1 != 0) {
        ans++;
    }
    if (j < M - 1) {
        ans++;
    }
    if (j > 0 && M - 1 != 0) {
        ans++;
    }
    return ans;
}

void solve() {
    G(n) G(m);
    N = n;
    M = m;
    ll grid[n][m];
    F(i, n) F(j, m) cin >> grid[i][j];

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] > squaresAround(i, j)) {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1) {
                if (j == 0 || j == m - 1) {
                    cout << "2 ";
                }
                else {
                    cout << "3 ";
                }
            }
            else {
                if (j == 0 || j == m - 1) {
                    cout << "3 ";
                }
                else {
                    cout << "4 ";
                }
            }
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