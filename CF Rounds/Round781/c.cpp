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
    vector<ll> vs(n - 1);
    ll occ[n + 1];
    memset(occ, 0, sizeof occ);
    F(i, n - 1) {
        cin >> vs[i];
        occ[vs[i]]++;
    }
    // worst case, straight line: 1 2 3 4 5...
    // choose children with many "siblings"
    // basically, for 1 1 1 2 2 4, we have to choose v2 first cuz v2, v3, v4 are
    // children of v1.
    // then choose v5 on the next injection because that has the next most
    // children. then choose v7 when you get to that.
    // only thing is, if you have something like
    // 1 1 1 1 1 1 1 ... 1: n ones, it takes n/2 seconds to inject all
    // so it doesnt really matter which you start with cuz all children are like
    // independent
    // if # of siblings are even, start injecting next set of siblings
    // if there are 6 siblings, then it takes a total of 3 injections

    ll ans = 0;
    ll mx = -1;
    for (ll e : occ) {
        if (e) ans++;
        mx = max(mx, e);
    }
    if (mx > ans) {
        if (mx % 2 == 0) {
            ans += mx / 2;
        } else {
            ans += (mx + 1) / 2;
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