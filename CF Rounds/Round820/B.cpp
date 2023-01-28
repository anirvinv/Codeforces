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
    string s;
    cin >> s;
    string ans = "";
    int i = 0;
    for (int i = 0; i < n; i++) {
        if (i < n - 2 && s[i] != '0' && s[i + 1] == '0' && s[i + 2] == '0') {
            int x = stoi(s.substr(i, 3)) / 10;
            ans.push_back('a' + x - 1);
            i += 2;
        } else if (i < n - 2 && s[i] != '0' && s[i + 1] != '0' &&
                   s[i + 2] == '0') {
            if (i + 3 < n && s[i + 3] == '0') {
                ans.push_back('a' + s[i] - '1');
            } else {
                int x = stoi(s.substr(i, 3)) / 10;
                ans.push_back('a' + x - 1);
                i += 2;
            }
        } else if (i < n - 2 && s[i] != '0' && s[i + 1] != '0' &&
                   s[i + 2] != '0') {
            ans.push_back('a' + s[i] - '1');
        } else if (i >= n - 2) {
            ans.push_back('a' + s[i] - '1');
        }
    }
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