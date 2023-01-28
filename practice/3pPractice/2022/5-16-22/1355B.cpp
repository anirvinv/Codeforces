#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<ll> e(n);
    map<int, int> occ;
    F(i, n) { cin >> e[i]; occ[e[i]]++; }
    ll ans = 0;
    ll carry = 0;
    for (auto iter = occ.begin(); iter != occ.end(); ++iter) {
        ll current = iter->second + carry;
        if (current / iter->first == 0) { carry += iter->second; }
        else {
            ans += current / iter->first;
            carry = current % iter->first;
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