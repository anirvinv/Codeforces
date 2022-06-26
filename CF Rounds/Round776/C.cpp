#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

bool customSort(pair<ll, ll> a, pair<ll, ll> b) { return a.second < b.second; }

vector<pair<ll, ll>> create_copy(vector<pair<ll, ll>> v) { return v; }

void solve() {
    G(n) G(m);
    vector<pair<ll, ll>> pts(m);
    map<ll, ll> idx;
    F(i, m) {
        G(p) G(w);
        pts[i] = make_pair(p, w);
        idx[p] = i + 1;
    }
    sort(all(pts));
    ll minWeight = LLONG_MAX;
    vector<ll> sgt(n);
    vector<vector<pair<ll, ll>>> ptcop(m - n - n + 1);
    F(i, m - n - n + 1) { ptcop[i] = create_copy(pts); }

    ll count = 0;
    for (int i = n; i <= m - n; i++) {
        pts = ptcop[count++];
        sort(pts.begin(), pts.begin() + i, customSort);
        sort(pts.begin() + i, pts.end(), customSort);
        ll weight = 0;
        F(j, n) { weight += pts[j].second + pts[i + j].second; }
        if (weight < minWeight) {
            minWeight = weight;
            sgt.clear();
            F(j, n) {
                sgt.push_back(pts[j].first);
                sgt.push_back(pts[i + j].first);
            }
        }
    }
    sort(all(sgt));
    cout << minWeight << '\n';
    for (int i = 0; i < sgt.size() / 2; i++) {
        cout << idx[sgt[i]] << " " << idx[sgt[sgt.size() - i - 1]] << '\n';
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