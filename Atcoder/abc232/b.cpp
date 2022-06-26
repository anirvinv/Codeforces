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
    string s;
    cin >> s;
    string t;
    cin >> t;
    int v = s[0] - t[0];
    if (v < 0) v += 26;
    for (int i = 0; i < s.length(); i++) {
        int v1 = s[i] - t[i];
        if (v1 < 0) {
            v1 += 26;
        }
        if (v1 != v) {
            cout << "No" << '\n';
            return;
        }
    }
    cout << "Yes" << '\n';
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
}