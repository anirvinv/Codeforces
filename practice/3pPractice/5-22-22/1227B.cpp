#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {

    G(n);
    vector<ll> pre(n);
    vector<ll> p(n);
    map<ll, ll> occ;
    bool marked[n + 1];
    memset(marked, 0, sizeof marked);
    F(i, n) { cin >> pre[i]; occ[pre[i]]++; }
    if (occ[n] == 0) {
        cout << -1 << '\n';
        return;
    }
    F(i, n - 1) {
        if (pre[i] > pre[i + 1] || pre[i] > n || pre[i + 1] > n) {
            cout << -1 << '\n';
            return;
        }
    }
    for (auto iter = occ.begin(); iter != occ.end(); ++iter) {
        if (iter->second > iter->first) {
            cout << "-1" << '\n';
            return;
        }
    }
    p[0] = pre[0];
    marked[p[0]] = 1;
    vector<ll> unused;
    vector<int> inds = { 0 };
    F(i, n - 1) {
        if (pre[i] != pre[i + 1]) {
            p[i + 1] = pre[i + 1];
            inds.push_back(i + 1);
            marked[p[i + 1]] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!marked[i]) {
            unused.push_back(i);
        }
    }
    reverse(all(unused));

    for (int e : inds) {
        int i = e + 1;
        while (i < n && p[i] == 0) {
            if (!marked[unused.back()] && unused.back() < p[e]) {
                p[i] = unused.back();
                marked[p[i]] = 1;
                unused.pop_back();
                i++;
            }
            else {
                cout << -1 << '\n';;
                return;
            }
        }
    }


    for (int e : p) cout << e << " ";

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