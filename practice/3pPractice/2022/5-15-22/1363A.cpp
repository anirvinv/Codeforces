#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) G(x);
    vector<ll> a(n);
    ll odds = 0;
    ll evens = 0;
    F(i, n) {
        cin >> a[i];
        odds += (a[i] % 2 == 1);
        evens += (a[i] % 2 == 0);
    }
    if (odds % 2 == 0) {
        odds--;
        if (odds < 0) {
            cout << "No" << '\n';
            return;
        }
    }
    if (odds > x) {
        if (x % 2 == 0) {
            odds = max(1ll, x - 1);
        }
        else {
            odds = x;
        }
    }
    if (x - odds > evens) {
        cout << "No" << '\n';
    }
    else {
        cout << "Yes" << '\n';
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