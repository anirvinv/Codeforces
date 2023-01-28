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
    G(n) G(k);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    if (k == 1) {
        if (n % 2 == 1) {
            cout << n / 2 << '\n';
        }
        else {
            cout << (n - 1) / 2 << '\n';
        }
        return;
    }
    ll tall = 0;
    F(i, 1, n - 1) {
        tall += a[i] > a[i - 1] + a[i + 1];
    }
    cout << tall << '\n';
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