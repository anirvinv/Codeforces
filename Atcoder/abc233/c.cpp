#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i, L, R) for (int i = (L); i < (R); i++)
#define FE(i, L, R) for (int i = (L); i <= (R); i++)
#define FF(i, L, R) for (int i = (L); i > (R); i--)
#define FFE(i, L, R) for (int i = (L); i >= (R); i--)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007  // 998244353
ll n;
ll x;
ll ans = 0;
vector<ll> scs;
void recurse(vector<vector<pll>> &a, ll product, ll ways, ll level) {
    ll balls = a[level].size();
    if (level == n - 1) {
        // last level
        F(i, 0, balls) {
            if (product * a[level][i].first == x) {
                ways *= a[level][i].second;
                ans += ways;
            }
        }
        return;
    }
    F(i, 0, balls) {
        if (product * a[level][i].first <= x) {
            recurse(a, product * a[level][i].first, ways * a[level][i].second,
                    level + 1);
        }
    }
}
void solve() {
    G(N) G(X);
    n = N;
    x = X;
    vector<map<ll, ll>> ps(N);
    F(i, 0, N) {
        G(L);
        F(j, 0, L) {
            G(psij);
            ps[i][psij]++;
        }
    }
    vector<vector<pll>> a(N);
    int i = 0;
    for (map<ll, ll> m : ps) {
        vector<pll> vp;
        for (pll p : m) {
            vp.push_back(p);
        }
        a[i++] = vp;
    }
    if (a.size() == 1) {
        for (pll pr : a[0]) {
            if (pr.first == X) {
                cout << pr.second << '\n';

                return;
            }
        }
        cout << 0 << '\n';
        return;
    }
    F(i, 0, a[0].size()) { recurse(a, a[0][i].first, a[0][i].second, 1); }
    cout << ans << '\n';
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