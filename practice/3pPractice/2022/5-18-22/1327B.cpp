#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<vector<ll>> gs(n);
    F(i, n) {
        G(k);
        F(j, k) { G(x); gs[i].push_back(x); }
    }
    int taken[n];
    int ptaken[n];
    memset(taken, 0, sizeof taken);
    memset(ptaken, 0, sizeof ptaken);
    vector<pair<ll, ll>> m;
    F(i, n) {
        F(j, gs[i].size()) {
            if (!taken[gs[i][j] - 1]) {
                taken[gs[i][j] - 1] = 1;
                ptaken[i] = 1;
                m.push_back({ i + 1, gs[i][j] });
                break;
            }
        }
    }
    int count = 0;
    int nt = 0;
    F(i, n) {
        if (!taken[i]) {
            nt = i + 1;
        }
        count += taken[i];
    }
    if (count == n) {
        cout << "OPTIMAL" << '\n';
        return;
    }
    cout << "IMPROVE" << '\n';
    F(i, n) {
        if (!ptaken[i]) {
            cout << i + 1 << " " << nt << '\n';
            break;
        }
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