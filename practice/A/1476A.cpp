#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    ll n, k;
    cin >> n >> k;
    if (n <= k) {
        cout << (k + n - 1) / n << '\n';
    } else {
        ll val = (n + k - 1) / k;
        ll v2 = k * val;
        cout << (v2 + n - 1) / n << '\n';
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