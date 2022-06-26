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
    G(n);
    if (n <= 19) {
        cout << "YES" << '\n';
        ll j = 1;
        F(i, n) {
            if (i == 0) {
                cout << j << " ";
            } else {
                j *= 3;
                cout << j << ' ';
            }
        }
        cout << '\n';
    } else {
        cout << "NO" << '\n';
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