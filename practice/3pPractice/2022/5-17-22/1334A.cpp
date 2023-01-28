#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<pair<ll, ll>> a(n);
    F(i, n) {
        G(x) G(y);
        a[i] = make_pair(x, y);
    }
    // check that both are ascending order
    F(i, n - 1) {
        if (a[i].first > a[i + 1].first || a[i].second > a[i + 1].second) {
            cout << "NO" << '\n';
            return;
        }
    }
    // we know both p and c are ascending at this point
    if (a[0].first < a[0].second) {
        cout << "NO" << '\n';
        return;
    }
    F(i, n - 1) {
        if (a[i + 1].first - a[i].first < a[i + 1].second - a[i].second) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';


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