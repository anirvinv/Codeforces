#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    vector<ll> a(n);
    F(i, n) cin >> a[i];
    sort(all(a));

    int count = 0;
    if (n % 2 == 0) {
        for (int i = 1; i < n; i += 2) {
            cout << a[(n - i) / 2] << ' ';
            cout << a[(n + i) / 2] << ' ';
        }
    }
    else {
        cout << a[n / 2] << ' ';
        for (int i = 2; i < n; i += 2) {
            cout << a[(n + i) / 2] << ' ';
            cout << a[(n - i) / 2] << ' ';
        }
    }
    cout << '\n';

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