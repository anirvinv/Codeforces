#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
int weaker[200020];
int edges[200020];
void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
void solve() {
    G(n) G(m);
    memset(weaker, 0, n * sizeof(int));
    memset(edges, 0, n * sizeof(int));
    F(i, m) {
        G(u) G(v);
        edges[u]++;
        edges[v]++;
        if (u > v) {
            weaker[u]++;
        } else {
            weaker[v]++;
        }
    }
    ll alive = 0;
    set<int> dead;
    for (int i = 1; i <= n; i++) {
        alive += weaker[i] == edges[i];
        if (weaker[i] != edges[i]) {
            dead.insert(i);
        }
    }
    G(q);
    while (q--) {
        G(x);
        if (x == 1) {
            G(u) G(v);
            if (u > v) {
                swap(u, v);
            }
            // u < v
            edges[u]++;
            edges[v]++;
            weaker[v]++;
            dead.insert(u);
        } else if (x == 2) {
            G(u) G(v);
            if (u > v) {
                swap(u, v);
            }
            bool ub = weaker[u] == edges[u];
            edges[u]--;
            edges[v]--;
            weaker[v]--;
            if (ub) {
                dead.insert(u);
            } else if (weaker[u] == edges[u]) {
                dead.erase(u);
            }
        } else {
            cout << n - dead.size() << '\n';
        }
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