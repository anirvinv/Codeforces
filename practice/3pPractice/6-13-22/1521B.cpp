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
    G(n);
    vector<ll> a(n);
    F(i, 0, n) cin >> a[i];
    int idx = min_element(all(a)) - a.begin();
    vector<pair<pll, pll>> ops;
    int count = 1;
    FFE(i, idx - 1, 0) {
        ops.push_back({ {i,idx }, {a[idx] + count++, a[idx] } });
    }
    count = 1;
    F(i, idx + 1, n) {
        ops.push_back({ {i,idx }, {a[idx] + count++, a[idx] } });
    }
    cout << ops.size() << '\n';
    for (auto op : ops) {
        cout << op.first.first + 1 << " " << op.first.second + 1 << " " << op.second.first << " " << op.second.second << '\n';
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