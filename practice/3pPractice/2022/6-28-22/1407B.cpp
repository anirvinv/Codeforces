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
    vector<ll> ans = { *max_element(all(a)) };
    a.erase(max_element(all(a)));
    ll pg = *ans.begin();
    while (a.size() > 0) {
        auto it = a.begin();
        auto er = it;
        ll gcd = __gcd(*it, pg);
        while (it != a.end()) {
            if (__gcd(*it, pg) > gcd) {
                gcd = __gcd(*it, pg);
                er = it;
            }
            else if (__gcd(*it, pg) == gcd && *it < *er) {
                er = it;
            }
            it++;
        }
        ans.push_back(*er);
        pg = gcd;
        a.erase(er);
    }

    for (ll e : ans) {
        cout << e << " ";
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