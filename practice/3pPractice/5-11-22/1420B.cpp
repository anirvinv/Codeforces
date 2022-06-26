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
    F(i, n) cin >> a[i];
    // groups: maps from highest nth bit to occ
    map<int, int> oc;
    for (int e : a) {
        int count = 0;
        while (e) {
            e /= 2;
            count++;
        }
        oc[count]++;
    }
    ll ans = 0;
    for (auto iter = oc.begin(); iter != oc.end(); ++iter) {
        ll x = iter->second;
        ans += (x * (x - 1)) / 2;
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