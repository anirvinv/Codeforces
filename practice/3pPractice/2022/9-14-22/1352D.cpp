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
    int l = 1, r = n - 1;
    ll ap = a[0];
    ll bp = 0;
    ll moves = 1;
    ll af = a[0];
    ll bf = 0;
    while (l <= r) {
        ll bsum = 0;
        ll asum = 0;
        // debug(l);
        // debug(r);
        if (moves & 1) {
            // Bob's turn
            while (bsum <= ap && r >= l) {
                bf += a[r];
                bsum += a[r--];
            }
            bp = bsum;
        }
        else {
            // Alice's turn
            while (asum <= bp && l <= r) {
                af += a[l];
                asum += a[l++];
            }
            ap = asum;
        }
        moves++;
    }
    cout << moves << " " << af << " " << bf << '\n';
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