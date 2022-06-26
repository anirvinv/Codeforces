#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int n, m;
    cin >> n >> m;
    multiset<int> shit;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            shit.insert(max({i + j, abs(n - i - 1) + abs(m - j - 1),
                             i + abs(m - j - 1), j + abs(n - i - 1)}));
        }
    }
    for (auto x : shit) {
        cout << x << ' ';
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