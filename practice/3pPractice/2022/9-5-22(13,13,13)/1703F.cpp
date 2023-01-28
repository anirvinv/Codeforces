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
bool cs(pll a, pll b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}
void solve() {
    G(n);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    vector<ll> lst;
    ll ans = 0;
    F(i, 0, n) {
        if (a[i] >= i + 1) continue;
        ans += (ll)(lower_bound(all(lst), a[i]) - lst.begin());
        lst.push_back(i + 1);
    }
    cout << ans << '\n';
    /*
    Solution:
        Go through all indices and maintain a list, lst, when you encounter a[i] < i. When a[i] < i, first check
        through the lst and count all indices where a[i] > j, where j is each index in lst. Then, add i to lst.

    Reflection:
        I thought of the opposite approach...checking prefixes instead of suffixes. Damn it. I was kinda really close.
        I had the binary search idea, i had p much most of the things needed. Just didn't make some connections.
    */
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