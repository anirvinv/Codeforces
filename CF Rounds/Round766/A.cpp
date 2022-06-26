#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    string A[n];
    fo(i, n) {
        string s;
        cin >> s;
        A[i] = s;
    }
    if (A[r - 1][c - 1] == 'B') {
        cout << 0 << '\n';
        return;
    }

    int b = 0;
    fo(i, n) {
        fo(j, m) { b += A[i][j] == 'B'; }
    }
    if (b == 0) {
        cout << -1 << '\n';
        return;
    } else {
        for (char c : A[r - 1]) {
            if (c == 'B') {
                cout << 1 << '\n';
                return;
            }
        }
        fo(i, n) {
            if (A[i][c - 1] == 'B') {
                cout << 1 << '\n';
                return;
            }
        }
        cout << 2 << '\n';
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