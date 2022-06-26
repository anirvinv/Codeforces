#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    if ((a + b + c) % 9 != 0) {
        cout << "NO" << '\n';
        return;
    }
    int mi = (a + b + c) / 9;
    if (a >= mi && b >= mi && c >= mi) {
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