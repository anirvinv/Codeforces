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
    vector<ll> d(n);
    F(i, 0, n) {
        cin >> d[i];
        d[i] %= k;
    }
    map<ll, ll> mp;
    F(i, 0, n) {
        mp[d[i]]++;
    }
    ll ans = 0;
    F(i, 0, n) {
        if (mp[d[i]] > 0) {
            if (((k - d[i]) % k) == d[i]) {
                if (mp[d[i]] >= 2) {
                    ans += 2;
                    mp[d[i]] -= 2;
                }
            }
            else if (mp[k - d[i]] > 0) {
                ans += 2;
                mp[d[i]]--;
                mp[k - d[i]]--;
            }
        }
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