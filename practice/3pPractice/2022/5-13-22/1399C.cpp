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
    F(i, n) { cin >> a[i]; }
    sort(all(a));
    map<ll, ll> oc;
    set<ll> sums;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // oc[a[i] + a[j]]++;
            sums.insert(a[i] + a[j]);
        }
    }
    ll sum = 0;
    ll occ = 0;

    for (auto iter = oc.begin(); iter != oc.end(); ++iter) {
        if (iter->second > occ) {
            sum = iter->first;
            occ = iter->second;
        }
    }

    ll ans = 0;
    for (ll s : sums) {
        multiset<ll> sa(all(a));
        ll localAns = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] + a[j] == s) {
                    if (a[i] == a[j]) {
                        if (sa.count(a[i]) >= 2) {
                            sa.erase(sa.find(a[i]));
                            sa.erase(sa.find(a[i]));
                            localAns++;
                        }
                    }
                    else if (sa.count(a[i]) > 0 && sa.count(a[j]) > 0) {
                        sa.erase(sa.find(a[i]));
                        sa.erase(sa.find(a[j]));
                        localAns++;
                    }
                }
            }
        }
        ans = max(ans, localAns);
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