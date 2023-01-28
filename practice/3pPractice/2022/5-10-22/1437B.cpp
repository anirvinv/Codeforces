#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    string s;
    cin >> s;
    // 11101000
    // 10101010110001
    // as long as it is alternating, keep picking up substring to reverse
    ll ans = 0;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            ans++;
        }
    }
    cout << (ans + 1) / 2 << '\n';
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