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
    // one of the worst problems i have ever done
    G(n);
    vector<ll> a(n);
    ll ts = 0;
    F(i, 0, n) { cin >> a[i]; ts += a[i]; }
    vector<ll> ep(n);
    vector<ll> os(n);
    if (n == 1) {
        cout << "1\n";
        return;
    }
    ll sum = 0;
    F(i, 0, n) {
        if (i % 2 == 0) {
            sum += a[i];
        }
        ep[i] = sum;
    }
    sum = 0;
    FFE(i, n - 1, 0) {
        if (i % 2 == 1) {
            sum += a[i];
        }
        os[i] = sum;
    }
    ll ans = 0;
    F(i, 0, n) {
        ll s = ts - a[i];
        if (i == 0 && s - os[0] == os[0]) {
            ans++;
        }
        else if (i == n - 1 && s - ep[n - 2] == ep[n - 2]) {
            ans++;
        }
        else if (s - (ep[i - 1] + os[i + 1]) == (ep[i - 1] + os[i + 1])) {
            ans++;
        }

    }
    cout << ans << '\n';
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