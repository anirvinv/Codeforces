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
    if (n % 2 == 0) {
        for (int i = 1; i <= n - 2; i += 2) {
            cout << i + 1 << " " << i << " ";
        }
        cout << n - 1 << " " << n << '\n';
    } else {
        vector<ll> x;
        for (int i = 1; i <= n; i++) {
            if (i != 1 && i != n - 2 && i != n) {
                x.push_back(i);
            }
        }
        sort(all(x));
        for (int i = 0; i < x.size() - 1; i += 2) {
            cout << x[i + 1] << " " << x[i] << " ";
        }
        cout << 1 << " " << n - 2 << " " << n << '\n';
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