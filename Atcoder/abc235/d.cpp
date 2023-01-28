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
set<ll> visited;
ll N = 0;
ll A = 0;
ll ans = -1;
map<ll, ll> mv;
bool dc(ll k, ll N) {
    ll d1 = 0, d2 = 0;
    while (k) {
        d1++;
        k /= 10;
    }
    while (N) {
        d2++;
        N /= 10;
    }
    return d1 > d2;
}

ll op(ll x) {
    // x > 10 and x%10!=0
    ll ld = x % 10;
    ll p = 0;
    ll temp = x;
    while (temp) {
        temp /= 10;
        ld *= 10;
    }
    ld /= 10;
    ld += x / 10;
    return ld;
}
void dfs(ll k, ll moves) {
    if (k == N) {
        // cout << k << " " << moves << '\n';
        if (ans != -1) {
            ans = min(ans, moves);
        } else {
            ans = moves;
        }
        return;
    }
    mv[k] = moves;
    visited.insert(k);
    // if k has more digits than N, no need to explore
    if (k > N && dc(k, N)) return;

    if (k >= 10 && (k % 10 != 0)) {
        ll opk = op(k);
        if (visited.find(opk) == visited.end() || (moves + 1) < mv[opk]) {
            if (moves + 1 < mv[opk]) mv[opk] = moves + 1;
            dfs(opk, moves + 1);
        }
    }
    if (visited.find(A * k) == visited.end() || (moves + 1) < mv[A * k]) {
        if (moves + 1 < mv[A * k]) mv[A * k] = moves + 1;
        dfs(A * k, moves + 1);
    }
}
void solve() {
    G(a) G(n);
    N = n;
    A = a;
    dfs(1, 0);
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