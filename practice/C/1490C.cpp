#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)

ll cube(ll n) { return n * n * n; }

void solve() {
    ll x;
    cin >> x;
    for (int a = 1; a < ceil(cbrt(x)); a++) {
        if (cube(a) + cube((ll)cbrt(x - cube(a))) == x) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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