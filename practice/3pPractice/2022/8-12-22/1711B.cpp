#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i,L,R) for (int i = (L); i < (R); i++)
#define FE(i,L,R) for (int i = (L); i <= (R); i++)
#define FF(i,L,R) for (int i = (L); i > (R); i--)
#define FFE(i,L,R) for (int i = (L); i >= (R); i--)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007 //998244353
void solve() {
    G(n) G(m);
    map<ll, ll> deg;
    vector<ll> a(n + 1);
    FE(i, 1, n) {
        cin >> a[i];
    }
    vector<vector<ll>> adj(n + 1);
    ll ans = LLONG_MAX;
    F(i, 0, m) {
        G(x) G(y);
        adj[x].push_back(y);
        deg[x]++;
        deg[y]++;
    }
    if (m % 2 == 0) {
        cout << 0 << '\n';
        return;
    }
    FE(i, 1, n) {
        if (deg[i] % 2 == 1) {
            ans = min(ans, a[i]);
        }
    }
    FE(i, 1, n) {
        vector<ll> p = adj[i];
        for (ll e : p) {
            if (deg[e] % 2 == 0 && deg[i] % 2 == 0) {
                ans = min(ans, a[e] + a[i]);
            }
        }
    }
    cout << ans << '\n';
    // REFLECTION:
    /*
    Why wasn't I able to get this?
        I didn't realize that removing two adjacent
        vertices with even degrees would remove
        an odd number of edges from the graph.
    Very close...
        I was very close to solving this problem because
        I realized that atmost, we would need to remove 2 vertices.
        I just wasnt sure which two to remove.
    */

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