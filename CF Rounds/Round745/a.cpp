#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007
ll factorial(ll x) {
    ll ans = 1;
    F(i, x) { ans *= i + 1; }
    return ans;
}
void solve() {
    G(n);
    // 2n numbers
    // In how many ways can n + 1 elements in the array be sorted?
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    ll ans = 2 * n * 2 * (n - 1);

    cout << ans << '\n';
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