#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    string s;
    cin >> s;
    int r = 0, l = 0, u = 0, d = 0;
    for (char c : s) {
        r += c == 'R';
        l += c == 'L';
        u += c == 'U';
        d += c == 'D';
    }
    char c;
    string ans = "";
    int h = min(r, l);
    int v = min(u, d);
    if (h && v || h == 1 || v == 1) {
        F(i, h) {
            ans += 'R';
        }
        F(i, v) {
            ans += 'U';
        }
        F(i, h) {
            ans += 'L';
        }
        F(i, v) {
            ans += 'D';
        }
    }
    else if (v) {
        ans = "UD";
    }
    else if (h) {
        ans = "LR";
    }
    cout << ans.length() << '\n';
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