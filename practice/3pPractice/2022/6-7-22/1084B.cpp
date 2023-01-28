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
    G(n) G(s);
    vector<ll> v(n);
    ll sum = 0;
    F(i, 0, n) { cin >> v[i]; sum += v[i]; }
    if (sum < s) {
        cout << "-1\n";
        return;
    }
    sort(all(v));
    if (sum - (v[0] * n) >= s) {
        cout << v[0] << '\n';
        return;
    }
    cout << (sum - s) / n << '\n';


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