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
ll median(vector<ll>& arr) {
    sort(all(arr));
    return (arr[1] + arr[2]) / 2;
}

void solve() {
    G(n) G(m);
    ll grid[n][m];
    memset(grid, 0, sizeof grid);
    ll avg = 0;
    F(i, 0, n) {
        F(j, 0, m) {
            cin >> grid[i][j];
        }
    }
    ll ag[n][m];
    memset(ag, 0, sizeof ag);
    F(i, 0, n) {
        F(j, 0, m) {
            vector<ll> a = { grid[i][j], grid[n - i - 1][m - j - 1], grid[i][m - j - 1], grid[n - i - 1][j] };
            ag[i][j] = median(a);
        }
    }
    ll ans = 0;
    F(i, 0, n) {
        F(j, 0, m) {
            ans += abs(ag[i][j] - grid[i][j]);
        }
    }
    cout << ans << '\n';
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