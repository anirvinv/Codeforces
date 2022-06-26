#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

bool Csort(pair<ll, ll> a, pair<ll, ll> b) { return a.second < b.second; }

void solve() {
    G(n) G(m);
    vector<pair<ll, ll>> pts(m);
    map<ll, ll> idx;
    F(i, m) {
        G(p) G(w);
        pts[i] = make_pair(p, w);
        idx[p] = i + 1;
    }
    sort(all(pts), Csort);

    vector<ll> pt(2 * n);
    ll mx = 0;
    for (int i = 0; i < 2 * n; i++) {
        mx += pts[i].second;
        pt[i] = pts[i].first;
    }
    sort(all(pt));
    cout << mx << '\n';
    for (int i = 0; i < n; i++) {
        cout << idx[pt[i]] << " " << idx[pt[2 * n - i - 1]] << '\n';
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