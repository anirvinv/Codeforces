#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    multiset<ll> s;
    ll sum = 0;
    F(i, n) {
        G(x);
        s.insert(x);
        sum += x;
    }
    vector<ll> pieces;
    pieces.push_back(sum);
    // 1 2 4 7 1 1 1 1 7 2
    // 27 -> (13),(14) -> (7,6) (7,7) ->
    ll splits = 0;
    while (splits <= n - 1 && !s.empty()) {
        ll curr = pieces.back();
        if (s.find(curr) != s.end()) {
            pieces.pop_back();
            s.erase(s.find(curr));
        } else {
            pieces.pop_back();
            pieces.push_back(curr / 2);
            pieces.push_back((curr + 1) / 2);
            splits++;
        }
    }
    if (s.empty() && splits <= n - 1) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
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