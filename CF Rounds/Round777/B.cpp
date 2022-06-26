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
        F(j, m) { arr[i][j] = (bool)(s[j] - '0'); }
    }
    F(i, n) {
        F(j, m) {
            if (arr[i][j] && OK(i, j + 1) && OK(i + 1, j + 1) &&
                arr[i][j + 1] && arr[i + 1][j + 1] && !arr[i + 1][j]) {
                cout << "NO" << '\n';
                return;
            }
            if (arr[i][j] && OK(i + 1, j) && OK(i, j + 1) && arr[i + 1][j] &&
                arr[i][j + 1] && !arr[i + 1][j + 1]) {
                cout << "NO" << '\n';
                return;
            }
            if (arr[i][j] && OK(i - 1, j) && OK(i, j + 1) && arr[i - 1][j] &&
                arr[i][j + 1] && !arr[i - 1][j + 1]) {
                cout << "NO" << '\n';

                return;
            }
            if (arr[i][j] && OK(i, j - 1) && OK(i - 1, j) && arr[i][j - 1] &&
                arr[i - 1][j] && !arr[i - 1][j - 1]) {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
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