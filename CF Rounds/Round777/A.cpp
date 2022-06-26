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
    ll twos = n / 2;
    ll ones = n - 2 * (n / 2);

    while (abs(ones - twos) > 1) {
        twos--;
        ones += 2;
    }
    if (twos > ones) {
        F(i, twos - 1) { cout << 21; }
        cout << 2 << '\n';
    } else if (ones > twos) {
        F(i, ones - 1) { cout << 12; }
        cout << 1 << '\n';
    } else {
        F(i, twos) { cout << 21; }
        cout << '\n';
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