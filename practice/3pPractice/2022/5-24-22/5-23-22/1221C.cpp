#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {

    G(c) G(m) G(x);
    ll maxTeams = min(c, m);
    c -= maxTeams;
    m -= maxTeams;
    ll l = c + m + x;
    if (l >= maxTeams) {
        cout << maxTeams << '\n';
    }
    else {
        cout << l + 2 * (maxTeams - l) / 3 << '\n';
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