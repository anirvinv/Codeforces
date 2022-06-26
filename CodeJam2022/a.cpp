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
    G(a) G(b);
    F(i, 2 * a) {
        if (i % 2 == 0) {
            F(j, 2 * b + 1) {
                if (i == 0 && (j == 0 || j == 1)) {
                    cout << '.';
                } else {
                    if (j % 2 == 0)
                        cout << '+';
                    else
                        cout << '-';
                }
            }
        } else {
            F(j, 2 * b + 1) {
                if (i == 1 && (j == 0 || j == 1)) {
                    cout << '.';
                } else {
                    if (j % 2 == 0)
                        cout << '|';
                    else
                        cout << '.';
                }
            }
        }
        cout << '\n';
    }
    F(j, 2 * b + 1) {
        if (j % 2 == 0)
            cout << '+';
        else
            cout << '-';
    }
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t= 1;
    F(i, t) {
        cout << "Case #" << i + 1 << ": " << '\n';
        solve();
    }
}