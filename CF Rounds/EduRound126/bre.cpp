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
    int N = 32768;
    G(n);
    vector<ll> a(n);
    F(i, n) cin >> a[i];
    F(i, n) {
        ll v = a[i];
        ll m = 0;
        if (v == 0) {
            cout << 0 << ' ';
            continue;
        }
        if (v & 1) {
            v = (v + 1) % N;
            m++;
            if (v == 0) {
                cout << 1 << ' ';
                continue;
            }
        }
        // at this point, its even
        ll twos = 0;
        if (v >= N) {
            v = (2 * v) % N;
            m++;
            twos++;
        }
        if (v == 0) {
            cout << m << ' ';
            continue;
        }
        ll temp = v;
        while (temp && temp % 2 == 0) {
            temp /= 2;
            twos++;
        }

        cout << min(15 - twos + m, N - v + m) << ' ';
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

    // cout << 294910 * 2 % 32768;
}