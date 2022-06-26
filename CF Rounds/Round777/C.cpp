#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
int N, M;
bool OK(int r, int c) { return (r >= 0 && r < N && c >= 0 && c < M); }
void solve() {
    G(n) G(m);
    N = n;
    M = m;
    bool arr[n][m];
    F(i, n) {
        string s;
        cin >> s;
        F(j, m) { arr[i][j] = s[j] - '0'; }
    }
    if (arr[0][0]) {
        cout << -1 << '\n';
        return;
    }
    vector<vector<int>> cs;
    for (int i = n - 1; i >= 1; i--) {
        F(j, m) {
            if (arr[i][j]) {
                vector<int> c;
                c.push_back(i);
                c.push_back(j + 1);
                c.push_back(i + 1);
                c.push_back(j + 1);
                cs.push_back(c);
            }
        }
    }
    for (int j = m - 1; j >= 1; j--) {
        if (arr[0][j]) {
            vector<int> c = {1, j, 1, j + 1};
            cs.push_back(c);
        }
    }
    cout << cs.size() << '\n';
    for (auto c : cs) {
        for (int e : c) {
            cout << e << ' ';
        }
        cout << '\n';
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