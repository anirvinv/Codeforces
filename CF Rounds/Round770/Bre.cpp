#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> arr(n);
    fo(i, n) cin >> arr[i];

    ll alice = x;
    for (int i = 0; i < n; i++) {
        alice ^= arr[i];
    }
    if ((alice & 1) == (y & 1)) {
        cout << "Alice" << '\n';
    } else {
        cout << "Bob" << '\n';
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