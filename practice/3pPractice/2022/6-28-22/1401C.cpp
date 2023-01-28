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
    ll m = *min_element(all(a));
    vector<ll> x, y;
    // elements that are not divisible by the minimum element are "locked"
    for (ll e : a) {
        if (e % m != 0) {
            x.push_back(e);
        }
        else {
            y.push_back(e);
        }
    }
    if (is_sorted(all(x))) {
        if (y.size()) { sort(all(y)); }
        int idx = 0;
        F(i, 0, n) {
            if (a[i] % m == 0) {
                a[i] = y[idx++];
            }
        }
        if (is_sorted(all(a))) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    else {
        cout << "NO\n";
    }
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