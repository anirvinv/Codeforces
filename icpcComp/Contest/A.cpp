#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll t, f, s, p, c;
    cin >> t >> f >> s >> p >> c;

    ll v1 = (6 * t + 3 * f + 2 * s + 1 * p + 2 * c);

    cin >> t >> f >> s >> p >> c;

    cout << v1 << ' ' << (6 * t + 3 * f + 2 * s + 1 * p + 2 * c) << '\n';
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