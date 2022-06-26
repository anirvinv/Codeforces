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
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        s[i] = (s[i] == '(' ? '0' : '1');
    }
    int i;
    ll moves = 0;
    for (i = 0; i < n - 1; i++) {
        if (s[i] == '1' && s[i] + s[i + 1] - 2 * '0' == 1) {
            int p = i + 2;
            while (p < n && s[p] != '1') {
                p++;
            }
            if (p == n) {
                break;
            } else {
                moves++;
                i = p;
            }

        } else {
            moves++;
            i++;
        }
    }
    cout << moves << " " << n - i << '\n';
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