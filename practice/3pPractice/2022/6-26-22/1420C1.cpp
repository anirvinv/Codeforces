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
    vector<ll> d1(n);
    // odd length
    vector<ll> d2(n);
    // even length
    F(i, 0, n) cin >> a[i];
    d1[0] = a[0];
    d2[0] = 0;
    F(i, 1, n) {
        d1[i] = max(d1[i - 1], d2[i - 1] + a[i]);
        d2[i] = max(d2[i - 1], d1[i - 1] - a[i]);
    }
    cout << max(d1[n - 1], d2[n - 1]) << '\n';
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