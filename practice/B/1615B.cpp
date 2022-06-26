#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
int p[200001][18];
void solve() {
    int l, r;
    cin >> l >> r;
    int mx = -1;
    for (int j = 0; j <= 17; j++) {
        mx = max(mx, p[r][j] - p[l - 1][j]);
    }
    cout << r - l + 1 - mx << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    int N = 200000;
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            p[1][0] = 1;
        } else {
            for (int j = 0; j <= 17; j++) {
                p[i][j] = p[i - 1][j] + (((i >> j) & 1) != 0);
            }
        }
    }

    while (t--) {
        solve();
    }
}