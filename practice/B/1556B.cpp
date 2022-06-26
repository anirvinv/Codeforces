#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

void solve() {
    G(n);
    vector<ll> a(n);
    vector<ll> ao;
    ll odd = 0;
    F(i, n) {
        G(v); a[i] = v & 1; odd += a[i] & 1;
        if (v & 1) {
            ao.push_back(i);
        }
    }
    if (!(n & 1) && odd != n / 2) {
        cout << -1 << '\n';
        return;
    }
    if (odd != n / 2 && odd != (n + 1) / 2) {
        cout << -1 << '\n';
        return;
    }
    ll moves1 = 0;
    ll moves2 = 0;
    if (odd == (n + 1) / 2) {
        int idx = 0;
        for (int i = 0; i < n; i += 2) {
            moves1 += abs(ao[idx++] - i);
        }
    }
    if (odd == n / 2) {
        int idx = 0;
        for (int i = 1; i < n; i += 2) {
            moves2 += abs(ao[idx++] - i);
        }
    }

    if (odd == n / 2 && odd == (n + 1) / 2) {
        cout << min(moves1, moves2) << '\n';
    }
    else {
        cout << max(moves1, moves2) << '\n';
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