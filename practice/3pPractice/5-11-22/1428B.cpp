#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    string ed;
    cin >> ed;

    bool chain = false;
    char first = 'x';
    for (int i = 0; i < n;i++) {
        if (ed[i] != '-') {
            first = ed[i];
            break;
        }
    }
    if (first == 'x') { first = '-'; }
    for (int i = 0; i < n; i++) {
        if (ed[i] != first && ed[i] != '-') {
            break;
        }
        if (i == n - 1) {
            chain = true;
        }
    }
    if (chain) {
        cout << n << '\n';
        return;
    }

    set<int> broken;
    for (int i = 0; i < n; i++) {
        char c = ed[i];
        if (c == '-') {
            broken.insert(i);
            broken.insert((i + 1) % n);
        }
    }
    cout << broken.size() << '\n';
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