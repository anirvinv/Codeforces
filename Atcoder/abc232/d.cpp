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

ll pl = 0;
vector<ll> adjlist[100 * 100 + 5];
vector<ll> pls;
bool visited[100 * 100 + 5];
void dfs(int k) {
    pl++;
    visited[k] = 1;
    bool found = 0;
    for (ll e : adjlist[k]) {
        if (!visited[e]) {
            dfs(e);
            found = 1;
        }
    }
    if (!found) {
        pls.push_back(pl);
    }
    pl--;
}
void solve() {
    G(H) G(W);
    char grid[H][W];
    F(i, 0, H) {
        F(j, 0, W) { cin >> grid[i][j]; }
    }
    // every square is its own number: j + i * W
    memset(visited, 0, sizeof visited);
    F(i, 0, H) {
        F(j, 0, W) {
            if (grid[i][j] == '.') {
                if (j + 1 < W && grid[i][j + 1] == '.') {
                    adjlist[i * W + j].push_back(i * W + j + 1);
                }
                if (i + 1 < H && grid[i + 1][j] == '.') {
                    adjlist[i * W + j].push_back((i + 1) * W + j);
                }
            }
        }
    }
    dfs(0);
    cout << *max_element(all(pls)) << '\n';
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