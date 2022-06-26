#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(m);
    ll a[2][m];
    ll ans = 0;

    F(j, 2) {
        F(i, m) {
            cin >> a[j][i];
            ans += a[j][i];
        }
    }
    if (m == 1) {
        cout << 0 << '\n';
        return;
    }
    vector<ll> sr1(m);
    ll sum = 0;
    for (int i = m - 1; i >= 0; i--) {
        sum += a[0][i];
        sr1[i] = sum;
    }
    vector<ll> pr2(m);
    sum = 0;
    F(i, m) {
        sum += a[1][i];
        pr2[i] = sum;
    }

    int ptr = 0;
    ll mxSum = LLONG_MAX;
    for (int i = 0; i < m; i++) {
        ll sum = -1;
        if (i < m - 1) {
            sum = sr1[i + 1];
        }
        if (i > 0) {
            sum = max(sum, pr2[i - 1]);
        }
        // cout << i << " " << sum << '\n';
        if (sum < mxSum) {
            ptr = i;
            mxSum = sum;
        }
    }
    // debug(ptr);
    cout << mxSum << '\n';

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