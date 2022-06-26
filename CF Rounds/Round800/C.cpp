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
    vector<ll> pre(n);
    ll sum = 0;
    F(i, 0, n) {
        cin >> a[i];
        sum += a[i];
        pre[i] = sum;
    }
    int l = n - 1;
    while (l >= 0 && a[l] == 0) {
        l--;
    }
    F(i, 0, n) {
        if (pre[i] <= 0 && i < l) {
            cout << "No\n";
            return;
        }
    }
    if (accumulate(all(a), 0) != 0) {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
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