#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) G(k);
    string s;
    cin >> s;
    vector<char> avail(k);
    map<char, bool> okay;
    F(i, k) { cin >> avail[i];okay[avail[i]] = 1; }
    vector<ll> notOkay;
    F(i, n) {
        if (!okay[s[i]]) {
            notOkay.push_back(i);
        }
    }
    // beginning
    if (notOkay.size() > 0) {
        ll length;
        ll ans = (notOkay[0] * (notOkay[0] + 1)) / 2;
        F(i, notOkay.size() - 1) {
            length = notOkay[i + 1] - notOkay[i] - 1;
            ans += (length * (length + 1)) / 2;
        }
        length = n - notOkay.back() - 1;
        ans += (length * (length + 1)) / 2;
        cout << ans << '\n';
    }
    else {
        cout << (n * (n + 1)) / 2 << '\n';
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
}