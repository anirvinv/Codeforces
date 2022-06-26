#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    fo(i, n) cin >> arr[i];
    vector<ll> pmax(n);
    vector<ll> smin(n);
    ll mx = 0;
    for (int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
        pmax[i] = mx;
    }
    ll mi = INT_MAX;

    for (int i = n - 1; i >= 0; i--) {
        mi = min(mi, arr[i]);
        smin[i] = mi;
    }

    for (int i = 0; i < n - 1; i++) {
        if (pmax[i] <= smin[i + 1]) {
            cout << "NO" << '\n';
            return;
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