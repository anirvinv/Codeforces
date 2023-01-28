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
    F(i, 0, n) { cin >> a[i]; }
    vector<ll> b1(n, 1);
    vector<ll> b2(n, 1);
    F(i, 0, n) {
        if (i % 2 == 0) {
            b1[i] = a[i];
        }
    }
    F(i, 0, n) {
        if (i % 2 == 1) {
            b2[i] = a[i];
        }
    }
    ll s1 = 0, s2 = 0;
    F(i, 0, n) {
        s1 += 2 * abs(b1[i] - a[i]) - a[i];
    }F(i, 0, n) {
        s2 += 2 * abs(b2[i] - a[i]) - a[i];
    }
    if (s1 <= 0) {
        for (ll e : b1) {
            cout << e << " ";
        }
        cout << '\n';
        return;
    }
    for (ll e : b2) {
        cout << e << " ";
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