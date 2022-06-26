#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
set<int> adjList[200020];

void d(set<int> a) {
    for (auto iter = a.begin(); iter != a.end(); iter++) {
        cout << (*iter) << ' ';
    }
    cout << '\n';
}

void solve() {
    G(n) G(m);
    for (int i = 1; i <= n; i++) {
        adjList[i].clear();
    }
    set<int> dead;
    F(i, m) {
        G(u) G(v);
        adjList[u].insert(v);
        adjList[v].insert(u);
        if (u < v) {
            dead.insert(u);
        } else {
            dead.insert(v);
        }
    }
    set<int> dcopy;
    for (int e : dead) {
        dcopy.insert(e);
    }

    G(q);
    F(i, q) {
        G(x);
        vector<pair<int, int>> ins;
        vector<pair<int, int>> del;
        if (x == 1) {
            G(u) G(v);
            adjList[u].insert(v);
            adjList[v].insert(u);
            if (u < v) {
                dead.insert(u);
            } else {
                dead.insert(v);
            }
            del.push_back(make_pair(u, v));

        } else if (x == 2) {
            // update the removed thing if smaller than
            G(u) G(v);
            adjList[u].erase(v);
            adjList[v].erase(u);
            ins.push_back(make_pair(u, v));
            if (adjList[u].size() == 0) {
                dead.erase(u);

            } else {
                auto iter = adjList[u].end();
                iter--;
                // biggest element it is connected to is < than it
                if ((*iter) < u) {
                    dead.erase(u);
                } else {
                    // biggest element it is connected to is > than it
                    dead.insert(u);
                }
            }
            if (adjList[v].size() == 0) {
                dead.erase(v);
            } else {
                auto iter = adjList[v].end();
                iter--;
                if ((*iter) < v) {
                    dead.erase(v);
                } else {
                    dead.insert(v);
                }
            }
        } else {
            for (auto p : ins) {
                adjList[p.first].insert(p.second);
                adjList[p.second].insert(p.first);
            }
            for (auto p : del) {
                adjList[p.first].erase(p.second);
                adjList[p.second].erase(p.first);
            }
            cout << n - dead.size() << '\n';
            ins.clear();
            del.clear();
            dead.clear();
            for (int e : dcopy) {
                dead.insert(e);
            }
        }
    }
    // for (int i = 1; i <= n; i++) {
    //     cout << i << ": ";
    //     d(adjList[i]);
    // }
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