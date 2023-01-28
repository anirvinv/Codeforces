#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

void solve() {
    G(n);
    vector<int> a(n);
    set<int> disconnected;
    map<int, int> numGang;
    F(i, n) { cin >> a[i]; numGang[i] = a[i]; }
    bool eq = false;
    for (int i = 0; i < n; i++) {
        if (a[i] != a[0]) {
            break;
        }
        if (i == n - 1) eq = true;
    }
    if (eq) {
        cout << "NO" << '\n';
        return;
    }
    // all you need is two different gangs
    // connect all the districts of one to one and the same gang to the other and then link the two easy
    int g1 = 0;
    int g2 = -1;
    for (int i = 0;i < n; i++) {
        if (a[i] != a[g1]) {
            g2 = i;
            break;
        }
    }
    cout << "YES" << '\n';
    for (int i = 0; i < n; i++) {
        if (i == g1) {
            // if we on g1, then connect g1 <-> g2
            cout << g1 + 1 << " " << g2 + 1 << "\n";
        }
        else if (i == g2) { continue; }
        else if (numGang[i] == numGang[g1]) {
            // if the district we connecting to g1 is the same gang as g1, then connect to g2
            cout << i + 1 << " " << g2 + 1 << '\n';
        }
        else {
            // connect to g1
            cout << g1 + 1 << " " << i + 1 << '\n';
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