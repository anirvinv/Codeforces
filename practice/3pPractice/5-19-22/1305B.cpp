#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    string s;
    cin >> s;
    vector<int> op;
    vector<int> cl;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            op.push_back(i);
        }
        else {
            cl.push_back(i);
        }
    }
    reverse(all(cl));
    // for (int e : op) {
    //     cout << e << " ";
    // }
    // cout << '\n';

    // for (int e : cl) {
    //     cout << e << " ";
    // }
    // cout << '\n';

    int left = -1;
    int right = INT_MAX;
    vector<vector<int>> ops;
    for (int i = 0; i < min(cl.size(), op.size()); i++) {
        if (ops.size() > 0 && op[i] > left && cl[i] < right && op[i] < cl[i]) {
            ops[ops.size() - 1].push_back(op[i]);
            ops[ops.size() - 1].push_back(cl[i]);
        }
        else if (op[i] < cl[i]) {
            ops.push_back({ op[i], cl[i] });
        }
        else {
            break;
        }
        left = op[i];
        right = cl[i];
    }
    for (auto& o : ops) {
        sort(all(o));
    }
    cout << ops.size() << '\n';
    for (vector<int> o : ops) {
        cout << o.size() << '\n';
        for (int e : o) {
            cout << e + 1 << " ";
        }
        cout << '\n';
    }

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