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
    G(n) G(q);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    ll lo = -1, hi = n - 1;
    // lo never works, hi always works
    // at index < hi, only good contests are tested
    // at index >= hi, all contests are tested 
    while (hi - lo > 1) {
        ll mid = (hi + lo) / 2;
        ll qt = q;
        F(i, mid, n) {
            qt -= (a[i] > qt);
        }
        if (qt < 0) {
            // doesnt work
            lo = mid;
        }
        else {
            hi = mid;
        }
    }
    F(i, 0, hi) {
        cout << (a[i] <= q);
    }
    F(i, hi, n) {
        cout << 1;
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