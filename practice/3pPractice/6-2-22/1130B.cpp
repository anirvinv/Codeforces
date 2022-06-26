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

    G(n);
    vector<ll> a(2 * n);
    F(i, 0, 2 * n) cin >> a[i];
    bool visited[2 * n];
    memset(visited, 0, sizeof visited);

    // first person goes
    vector<pair<ll, ll>> tr1;
    vector<pair<ll, ll>> tr2;
    ll c = 0;

    F(i, 0, 2 * n) {
        if (!visited[a[i]]) {
            tr1.push_back({ a[i],i });
        }
        else {
            tr2.push_back({ a[i],i });
        }
        visited[a[i]] = 1;
    }
    sort(all(tr1));
    sort(all(tr2));
    ll ans = 0;
    c = 0;
    for (auto e : tr1) {
        ans += abs(c - e.second);
        c = e.second;
    }
    c = 0;
    for (auto e : tr2) {
        ans += abs(c - e.second);
        c = e.second;
    }
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