#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) G(m);
    vector<ll> a(n);
    vector<ll> p(m);
    F(i, n) cin >> a[i];
    F(i, m) { cin >> p[i]; p[i]--; }
    sort(all(p));
    // find max of connected block and if the next block's max is greater, then screwed
    vector<vector<ll>> blocks;
    ll first_added = p[0];
    ll last_added = -2;

    if (first_added > 0) {
        for (ll i = 0; i < first_added; i++) {
            blocks.push_back({ i });
        }
    }
    for (int i = 0; i < m; i++) {
        if (last_added == p[i]) {
            blocks[blocks.size() - 1].push_back(p[i] + 1);
        }
        else {
            if (last_added != -2) {
                for (ll j = last_added + 1; j < p[i]; j++) {
                    blocks.push_back({ j });
                }
            }
            blocks.push_back({ p[i],p[i] + 1 });
        }
        last_added = p[i] + 1;
    }

    // debug(last_added);
    if (last_added < n - 1) {
        for (ll i = last_added + 1; i < n; i++) {
            blocks.push_back({ i });
        }
    }
    int b = blocks.size();
    ll mx1, mn2;
    F(i, b - 1) {
        mx1 = *max_element(a.begin() + blocks[i][0], a.begin() + blocks[i].back() + 1);
        mn2 = *min_element(a.begin() + blocks[i + 1][0], a.begin() + blocks[i + 1].back() + 1);
        if (mx1 > mn2) {
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