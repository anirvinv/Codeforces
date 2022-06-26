#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n, k;
    cin >> n >> k;
    int cd[n][2];
    fo(i, n) {
        cin >> cd[i][0];
        cin >> cd[i][1];
    }
    fo(i, n) {
        fo(j, n) {
            int dist = abs(cd[i][0] - cd[j][0]) + abs(cd[i][1] - cd[j][1]);
            if (k < dist) {
                break;
            }
            if (j == n - 1) {
                cout << 1 << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
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