#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int P;
    cin >> P;
    ll dp[65][10];
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < 10; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i < 65; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k <= j; k++) {
                dp[i][j] += dp[i - 1][k];
            }
        }
    }

    while (P--) {
        int ds, digits;
        cin >> ds >> digits;

        ll sum = 0;
        for (ll e : dp[digits]) {
            sum += e;
        }

        cout << ds << " " << sum << '\n';
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