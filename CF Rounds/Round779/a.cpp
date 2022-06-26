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
    ll ans = 0;
    F(i, n - 1) {
        if (i == n - 2 && s[i] == '0' && s[i + 1] == '1') break;
        if (s[i] == '0' && s[i + 1] == '0') {
            ans += 2;
        } else if (i < n - 2 && s[i] == '0' && s[i + 1] == '1' &&
                   s[i + 2] == '1') {
            i += 2;
        } else if (s[i] == '0' && s[i + 1] == '1') {
            ans++;
            i++;
        }
    }

    cout << ans << '\n';
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