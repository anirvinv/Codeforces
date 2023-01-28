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
    G(W) G(H);
    G(x1) G(y1) G(x2) G(y2);
    G(w) G(h);
    // test if it will work first
    if (W - (x2 - x1) < w && H - (y2 - y1) < h) {
        cout << "-1\n";
        return;
    }
    if (max(W - x2, x1) >= w || max(y1, H - y2) >= h) {
        cout << 0 << '\n';
    }
    else {
        // check all four corners
        // bottom left
        ll val = LLONG_MAX;
        if (x2 + (w - x1) <= W) {
            val = min(val, w - x1);
        }
        if (y2 + (h - y1) <= H) {
            val = min(val, h - y1);
        }
        // bottom right
        if (x1 - (x2 - (W - w)) >= 0) {
            val = min(val, x2 - (W - w));
        }
        // top left
        if (y1 - (y2 - (H - h)) >= 0) {
            val = min(val, y2 - (H - h));
        }
        cout << val << '\n';
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