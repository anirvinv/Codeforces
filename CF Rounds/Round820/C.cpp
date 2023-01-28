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
    string s;
    cin >> s;
    vector<pll> ci;
    F(i, 0, s.length()) { ci.push_back({s[i] - 'a' + 1, i + 1}); }
    if (ci[0].first <= ci.back().first) {
        sort(all(ci));
    } else {
        sort(all(ci), [](pll a, pll b) {
            if (a.first == b.first) return a.second < b.second;
            return a.first > b.first;
        });
    }
    int i = 0;
    for (; i < ci.size(); i++) {
        if (ci[i].second == 1) break;
    }
    ll jumps = 1;
    for (int j = i; j < ci.size(); j++) {
        if (ci[j].second == s.length()) {
            break;
        }
        jumps++;
    }
    cout << abs(s.back() - s[0]) << " " << jumps << '\n';
    for (int j = i; j < ci.size(); j++) {
        cout << ci[j].second << " ";
        if (ci[j].second == s.length()) break;
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