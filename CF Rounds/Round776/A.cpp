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
    char c;
    cin >> c;
    if (s.length() == 1 && s[0] == c) {
        cout << "YES" << '\n';
        return;
    } else if (s.length() == 1 && s[0] != c) {
        cout << "NO" << '\n';
        return;
    }
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0 && s[i] == c) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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