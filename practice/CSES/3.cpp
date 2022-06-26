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
    int ans = 1;
    int n = s.length();
    F(i, n - 1) {
        if (s[i] == s[i + 1]) {
            int count = 1;
            int idx = i + 1;
            while (idx < n && s[idx] == s[i]) {
                idx++;
                count++;
            }
            ans = max(ans, count);
            i = idx - 1;
        }
    }
    cout << ans << '\n';

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