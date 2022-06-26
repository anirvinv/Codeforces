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
    vector<pair<ll, ll>> a(n);
    F(i, n) {
        G(v);
        a[i] = make_pair(v, i);
    }
    sort(all(a));
    vector<ll> shifts(n);
    for (int i = n - 1; i >= 0; i--) {
        // if (a[i].second > a[i].first) {
        //     cout << -1 << '\n';
        //     return;
        // }
        ll shift = a[i].second + 1;

        if (a[i].first == a[i].second + 1) {
            shift = 0;
        }
        shifts[i] = shift;
        for (int j = 0; j <= i; j++) {
            a[j].second -= shift;
            if (a[j].second < 0) {
                a[j].second += a[i].first;
            }
            // a[j].second %= a[i].first;
        }
    }
    for (ll e : shifts) {
        cout << e << " ";
    }
    cout << '\n';
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