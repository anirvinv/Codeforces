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
vector<int> adjlist[400010];
bool visited[400010];

void dfs(int v) {
    visited[v] = 1;
    for (int e : adjlist[v]) {
        if (!visited[e]) {
            dfs(e);
        }
    }
}

void solve() {
    G(n);
    ll p[2][n];
    FE(i, 1, n) {
        adjlist[i].clear();
    }
    memset(visited, 0, (n + 1) * sizeof(bool));
    map<ll, ll> idx;
    F(i, 0, n) {
        cin >> p[0][i];
    }
    F(i, 0, n) {
        cin >> p[1][i];
    }
    F(i, 0, n) {
        adjlist[p[0][i]].push_back(p[1][i]);
    }
    ll ans = 1;
    FE(i, 1, n) {
        if (!visited[i]) {
            ans = ans << 1;
            ans %= MOD;
            dfs(i);
        }
    }
    cout << ans % MOD << '\n';
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