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
    ll sum = 0;
    F(i, 0, n) {
        cin >> a[i];
        sum += a[i];
    }
    sort(all(a));
    // a[0]*x and a.back()/x
    // go through every divisor cuz a[i] is in [1,100]
    ll tempSum = LLONG_MAX;
    FFE(i, n - 1, 1) {
        FE(d, 1, a[i]) {
            if (a[i] % d == 0) {
                tempSum = min(tempSum, sum - (a[i] + a[0]) + (a[i] / d) + (d * a[0]));
            }
        }
    }
    cout << min(tempSum, sum) << '\n';
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