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
    G(n) G(l) G(r);
    vector<ll> ans;
    ll curr = l;
    FE(i, 1, n) {
        if (__gcd(l, (ll)i) == (ll)i) {
            ans.push_back(l);
        }
        else {
            curr = i * ((l + i - 1) / i);
            if (curr > r) {
                cout << "NO\n";
                return;
            }
            ans.push_back(curr);
        }
    }
    cout << "YES\n";
    for (ll e : ans) {
        cout << e << ' ';
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