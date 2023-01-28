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
    G(n)
    ll max = -1;
    ll sum = 0;
    F(i, 0, n) {
        ll t;
        cin >> t;
        if (max < t) max = t;
        sum += t;
    }
    if (2 * max > sum) {
        cout << (sum - max);
    } else {
        cout << sum / 2;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}