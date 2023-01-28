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
    vector<ll> p(n);
    vector<ll> d;
    F(i, 0, n) {
        cin >> p[i];
    }
    vector<ll> ans = { p[0] };
    bool inc = p[0] < p[1];
    // basically, add the valleys and peaks
    F(i, 1, n) {
        if (p[i - 1] < p[i] != inc) {
            inc = !inc;
            ans.push_back(p[i - 1]);
        }
    }
    ans.push_back(p.back());
    cout << ans.size() << '\n';
    for (ll e : ans) {
        cout << e << " ";
    }
    cout << '\n';

    /*
    Reflection:
        Brained this problem
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