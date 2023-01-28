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
ll mp[1000010];
void solve() {
    G(n);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    memset(mp, 0, sizeof(int) * n);
    mp[1] = 1;
    set<ll, greater<ll>> divisors;
    F(i, 1, n) {
        // instead of iterating through all shitting keys, iterate only 
        // over the divisors that are present in the map
        for (int j = 1; j * j <= a[i]; j++) {
            if (a[i] % j == 0) { divisors.insert(j); divisors.insert(a[i] / j); }
        }
        for (ll j : divisors) {

            mp[j] += mp[j - 1];
            mp[j] %= MOD;

        }
        mp[1] += 1;
        divisors.clear();
    }
    ll ans = 0;
    FE(i, 1, n) {
        ll p = mp[i];
        ans += p;
        ans %= MOD;
    }
    cout << ans % MOD << '\n';
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