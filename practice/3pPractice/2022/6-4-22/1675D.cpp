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

vector<int> adj[200005];
bool visited[200005];
vector<vector<ll>> ans;
void dfs(int v) {
    visited[v] = 1;
    ans[ans.size() - 1].push_back(v);
    for (int i = 0; i < adj[v].size();i++) {
        if (!visited[adj[v][i]]) { dfs(adj[v][i]); }
    }
    ans.push_back({});
}

void solve() {
    G(n);
    vector<ll> p(n);
    F(i, 0, n) cin >> p[i];
    int root = 0;
    F(i, 0, n) {
        if (p[i] == i + 1) {
            root = i + 1;
        }
    }
    FE(i, 1, n) adj[i].clear();
    F(i, 0, n) {
        adj[p[i]].push_back(i + 1);
    }
    memset(visited, 0, (n + 1) * sizeof(bool));
    ans.clear();
    ans = { {} };
    // debug(root);
    dfs(root);
    // F(i, 1, n) cout << visited[i] << " ";
    // cout << '\n';
    int sz = 0;
    for (vector<ll> path : ans) {
        if (path.size() != 0) {
            sz++;
        }
    }
    cout << sz << '\n';
    for (vector<ll> path : ans) {
        if (path.size() != 0) {
            cout << path.size() << '\n';
            for (ll v : path) {
                cout << v << " ";
            }
            cout << '\n';
        }
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