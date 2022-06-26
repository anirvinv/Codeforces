#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
bool sign(vector<ll> a, int idx) {
    if (idx > 2) {
        int s1 = a[0] - a[idx];
        for (int i = 0; i <= idx - 2; i++) {
            if (a[i] - a[i + 1] < 0 != s1 < 0) {
                return false;
            }
        }
    }
    return true;
}
void solve() {
    G(n);
    vector<ll> c(n);
    int idx = 0;
    int idx2 = -1;
    F(i, n) {
        cin >> c[i];
        if (c[i] == 1) {
            idx = n - i;
            if (idx2 == -1) {
                idx2 = i;
            }
        }
    }
    // when c[i] = 1, shift = i + 1,
    // we know that the max has to be in INDEX n - shift
    // debug(idx);
    F(i, n) {
        int mxidx = (idx + i) % n;
        ll maxpw = mxidx + 1;
        if (i < n - 1 && c[i] == 1 && c[i + 1] != 2) {
            cout << "NO" << '\n';
            return;
        }
        if (c[i] > maxpw) {
            cout << "NO" << '\n';
            return;
        }
    }
    int curr = 1;
    for (int i = idx2; i < n; i++) {
        if (c[i] < curr) {
            cout << "NO" << '\n';
            return;
        } else {
            curr = c[i];
        }
    }

    if (!sign(c, idx2)) {
        cout << "NO" << '\n';
        return;
    }

    cout << "YES" << '\n';
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