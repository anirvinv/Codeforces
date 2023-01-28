#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {

    G(n);
    vector<pair<int, int>> a(n);
    F(i, n) {
        int x, y;
        cin >> x >> y;
        a[i] = { x,y };
    }
    sort(all(a));
    F(i, n - 1) {
        if (a[i].second > a[i + 1].second) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
    pair<int, int> curr = { 0,0 };
    F(i, n) {
        F(j, a[i].first - curr.first) {
            cout << "R";
        }

        F(j, a[i].second - curr.second) {
            cout << "U";
        }
        curr.first = a[i].first;
        curr.second = a[i].second;
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