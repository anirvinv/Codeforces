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
bool intersect(pll a, pll b) {
    // sort it by first number
    pll f = (a.first <= b.first) ? a : b;
    pll s = (a.first <= b.first) ? b : a;
    return s.first >= f.first && s.first <= f.second;
}
void solve() {
    G(n) G(x) G(m);
    pll rng = { x,x };
    F(i, 0, m) {
        G(l) G(r);
        // if ranges intersect, expand total range
        if (intersect(rng, { l,r })) {
            rng.first = min(rng.first, l);
            rng.second = max(rng.second, r);
        }
    }
    cout << rng.second - rng.first + 1 << '\n';
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