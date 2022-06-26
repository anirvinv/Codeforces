#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll p[3][4];
    F(i, 3) F(j, 4) { cin >> p[i][j]; }
    vector<ll> c(4, LLONG_MAX);
    ll sum = 0;
    F(j, 4) {
        F(i, 3) { c[j] = min(c[j], p[i][j]); }
        sum += c[j];
    }

    if (sum < 1e6) {
        cout << "IMPOSSIBLE" << '\n';
        return;
    }

    sum = 0;
    bool s = false;
    F(i, 4) {
        if (s) {
            cout << 0 << ' ';
        } else {
            if (sum + c[i] > 1e6) {
                cout << 1e6 - sum << ' ';
                s = true;
            } else {
                cout << c[i] << ' ';
                sum += c[i];
            }
        }
    }
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    F(i, t) {
        cout << "Case #" << i + 1 << ": ";
        solve();
    }
}