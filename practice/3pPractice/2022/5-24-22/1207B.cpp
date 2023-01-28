#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

void solve() {
    G(n) G(m);
    int a[n][m];
    int b[n][m];
    F(i, n) F(j, m) { cin >> a[i][j]; b[i][j] = 0; }
    vector<pair<int, int>> ops;
    F(i, n - 1) {
        F(j, m - 1) {
            if (a[i][j] & a[i + 1][j] & a[i][j + 1] & a[i + 1][j + 1]) {
                b[i][j] = 1;
                b[i + 1][j] = 1;
                b[i][j + 1] = 1;
                b[i + 1][j + 1] = 1;
                ops.push_back({ i + 1,j + 1 });
            }
        }
    }

    F(i, n) {
        F(j, m) {
            if (a[i][j] != b[i][j]) {
                cout << "-1\n";
                return;
            }
        }
    }
    cout << ops.size() << '\n';
    for (auto op : ops) {
        cout << op.first << " " << op.second << '\n';

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