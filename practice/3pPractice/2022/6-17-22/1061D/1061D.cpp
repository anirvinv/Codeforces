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
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    vector<pair<ll, map<ll, ll>>> dp(n);
    dp[0].first = 1;
    dp[0].second[1] = 1;
    F(i, 1, n) {
        dp[i].first = 0;
        dp[i].second[1] = 1;
        for (pair<ll, ll> p : dp[i - 1].second) {
            dp[i].second[p.first] += p.second;
            dp[i].second[p.first] %= MOD;
        }
        for (pair<ll, ll> p : dp[i - 1].second) {
            // p.first = size
            // p.second = valid occurrences
            if (p.first + 1 > a[i]) {
                break;
            }
            if (a[i] % (p.first + 1) == 0) {
                dp[i].second[p.first + 1] += p.second;
                dp[i].second[p.first + 1] %= MOD;
            }
        }
        dp[i - 1].second.clear();
        for (pll p : dp[i].second) {
            dp[i].first += p.second % MOD;
        }
        dp[i].first %= MOD;
    }
    // F(i, 0, n) {
    //     cout << dp[i].first << " ";
    //     for (pll p : dp[i].second) {
    //         cout << " {" << p.first << " : " << p.second << "} ";
    //     }
    //     cout << "\n";
    // }
    cout << dp[n - 1].first % MOD << '\n';
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