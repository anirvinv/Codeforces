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
    ll ans = 0;
    if (n & 1) {
        for (int i = 1; i < n - 1; i += 2) {
            ans += max({ a[i - 1] - a[i] + 1, a[i + 1] - a[i] + 1,0ll });
        }
    }
    else {
        vector<ll> odds;
        for (int i = 1; i < n - 1; i += 2) {
            odds.push_back(max({ a[i - 1] - a[i] + 1, a[i + 1] - a[i] + 1,0ll }));
        }
        vector<ll> evens;
        for (int i = 2; i < n - 1; i += 2) {
            evens.push_back(max({ a[i - 1] - a[i] + 1, a[i + 1] - a[i] + 1,0ll }));
        }
        vector<ll> oddprefix(odds.size());
        vector<ll> evensuffix(evens.size());
        ll sum = 0;
        F(i, 0, odds.size()) {
            sum += odds[i];
            oddprefix[i] = sum;
        }
        sum = 0;
        FFE(i, evens.size() - 1, 0) {
            sum += evens[i];
            evensuffix[i] = sum;
        }
        ans = evensuffix[0];
        F(i, 0, oddprefix.size()) {
            if (i == oddprefix.size() - 1) {
                ans = min(ans, oddprefix[oddprefix.size() - 1]);
            }
            else {
                ans = min(ans, oddprefix[i] + evensuffix[i + 1]);
            }
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