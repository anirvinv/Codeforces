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
int ans[50][50];

void solve() {
    G(n);
    vector<int> a, b;
    FE(i, 1, n * n) {
        a.push_back(i);
        b.push_back(i);
    }
    sort(all(b), greater<int>());
    int ptr = 0;
    while (ptr < n * n) {
        if (ptr % 2 == 0) {
            ans[ptr / n][ptr % n] = a.back();
            a.pop_back();
        } else {
            ans[ptr / n][ptr % n] = b.back();
            b.pop_back();
        }
        ptr++;
    }
    for (int i = 1; i < n; i += 2) {
        reverse(ans[i], ans[i] + n);
    }
    F(i, 0, n) {
        F(j, 0, n) { cout << ans[i][j] << " "; }
        cout << '\n';
    }
    // snake construction alteranting between min and max
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