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
    // 0 2 20 22 200 202 220 222
    // 0 1 10 11 100 101 110 111
    // convert to binary and then just replace the 2s with ones
    G(k);
    string ans = "";
    while (k) {
        ans.push_back((k % 2) + '0');
        k /= 2;
    }
    reverse(all(ans));
    for (char c : ans) {
        if (c == '0') {
            cout << c;
        } else {
            cout << '2';
        }
    }
    cout << '\n';
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