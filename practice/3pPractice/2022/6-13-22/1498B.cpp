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
    G(n) G(W);
    vector<ll> a(n);
    F(i, 0, n) {
        cin >> a[i];
    }
    sort(all(a));
    map<ll, ll> mp;
    for (ll e : a) {
        mp[e]++;
    }
    ll left = a.size();
    ll rowSum = 0;
    ll ans = 1;
    while (left > 0) {
        for (auto iter = mp.rbegin(); iter != mp.rend(); iter++) {
            if (rowSum + (mp.begin()->first) > W) {
                ans++;
                rowSum = 0;
                break;
            }
            ll occ = min(iter->second, (W - rowSum) / (iter->first));
            rowSum += occ * iter->first;
            iter->second -= occ;
            left -= occ;
        }
        vector<ll> eraseKeys;
        for (auto iter = mp.begin(); iter != mp.end(); iter++) {
            if (!iter->second) {
                eraseKeys.push_back(iter->first);
            }
        }
        for (ll key : eraseKeys) {
            mp.erase(key);
        }
        // break;
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