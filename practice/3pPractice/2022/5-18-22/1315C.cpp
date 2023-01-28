#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {

    G(n);
    vector<ll> b(n);
    bool marked[2 * n + 1];
    memset(marked, 0, sizeof marked);
    F(i, n) { cin >> b[i]; marked[b[i]] = 1; }
    // vector<ll> left;
    // for (int i = 1; i <= 2 * n; i++) {
    //     if (!marked[i]) { left.push_back(i); }
    // }
    vector<ll> ans;
    F(i, n) {
        ans.push_back(b[i]);
        int ptr = b[i];
        while (marked[ptr] && ptr < 2 * n + 1) {
            ptr++;
        }
        if (ptr == 2 * n + 1) {
            cout << "-1\n";
            return;
        }
        ans.push_back(ptr);
        marked[ptr] = 1;
    }
    for (ll e : ans) {
        cout << e << ' ';
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