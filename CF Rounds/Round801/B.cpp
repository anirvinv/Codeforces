#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i, L, R) for (int i = (L); i < (R); i++)
#define FE(i, L, R) for (int i = (L); i <= (R); i++)
#define FF(i, L, R) for (int i = (L); i > (R); i--)
#define FFE(i, L, R) for (int i = (L); i >= (R); i--)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007  // 998244353
void solve() {
    G(n);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    if (n % 2 == 1) {
        cout << "Mike\n";
        return;
    }
    ll mkmin = LLONG_MAX;
    ll mi = -1;
    for (int i = 0; i < n; i += 2) {
        if (a[i] < mkmin) {
            mkmin = a[i];
            mi = i;
        }
    }
    ll jmin = LLONG_MAX;
    ll ji = -1;
    for (int i = 1; i < n; i += 2) {
        if (a[i] < jmin) {
            jmin = a[i];
            ji = i;
        }
    }
    if (jmin == mkmin) {
        if (ji > mi) {
            cout << "Joe\n";
        } else {
            cout << "Mike\n";
        }
    } else {
        if (jmin < mkmin) {
            cout << "Mike\n";
        } else {
            cout << "Joe\n";
        }
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