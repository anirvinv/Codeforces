#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<ll> a(n);
    map<ll, ll> occ;
    F(i, n) { cin >> a[i];occ[a[i]]++; }
    bool works = false;
    map<ll, vector<ll>> ind;
    for (ll x : a) {
        if (occ[x] > 1) {
            works = true; break;
        }
    }
    if (!works) {
        cout << -1 << '\n';
        return;
    }
    F(i, n) {
        if (occ[a[i]] > 1) {
            ind[a[i]].push_back(i);
        }
    }
    ll ans = n;
    for (auto iter = ind.begin(); iter != ind.end(); ++iter) {
        sort(all(iter->second));
        for (int i = 0; i < iter->second.size() - 1; i++) {
            ans = min(ans, iter->second[i + 1] - iter->second[i] + 1);
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