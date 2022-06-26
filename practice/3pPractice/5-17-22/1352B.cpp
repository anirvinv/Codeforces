#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) G(k);
    if (k == 1) {
        cout << "YES" << '\n';
        cout << n << '\n';
        return;
    }
    if (k > n) {
        cout << "NO" << '\n';
        return;
    }
    if (k == n - 1) {
        cout << "NO" << '\n';
        return;
    }
    if (k % 2 == 0 && n % 2 == 1) {
        cout << "NO" << '\n';
        return;
    }
    // cant have odd even

    // can have even odd
    if (n % 2 != k % 2) {
        if (k > n / 2) {
            cout << "NO" << '\n';
            return;
        }
        else {
            cout << "YES" << '\n';
            F(i, k - 1) cout << "2 ";
            cout << n - 2 * k + 2 << '\n';
        }
    }
    else {
        cout << "YES" << '\n';
        F(i, k - 1) cout << "1 ";
        cout << n - k + 1 << '\n';
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