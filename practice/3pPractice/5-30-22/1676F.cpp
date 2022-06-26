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
    G(n) G(k);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    sort(all(a));
    map<ll, ll> oc;
    F(i, 0, n) {
        oc[a[i]]++;
    }
    set<ll> breakpoints;
    bool ps = false;
    for (auto i = oc.begin(); i != oc.end(); i++) {
        if (i->second < k) { breakpoints.insert(i->first); }
        ps |= i->second >= k;
    }
    if (!ps) {
        cout << -1 << '\n';
        return;
    }

    set<ll> s;
    F(i, 0, n) {
        s.insert(a[i]);
    }
    vector<ll> smol;
    for (ll e : s) {
        smol.push_back(e);
    }
    vector<vector<ll>> parts = { {} };
    if (oc[a[0]] >= k) {
        parts[parts.size() - 1].push_back(a[0]);
    }
    int ptr = 1;
    while (ptr < smol.size()) {
        if (oc[smol[ptr]] >= k) {
            if (smol[ptr - 1] + 1 == smol[ptr] && oc[smol[ptr - 1]] >= k) {
                parts[parts.size() - 1].push_back(smol[ptr]);
            }
            else {
                parts.push_back({ smol[ptr] });
            }
        }
        ptr++;
    }
    int l = -1, r = -1;
    for (vector<ll> v : parts) {
        if (v.size() >= r - l + 1) {
            l = v[0];
            r = v.back();
        }
    }
    cout << l << " " << r << '\n';
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