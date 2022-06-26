#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    ll mx = 0;
    fo(i, n) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    vector<ll> sums;
    for (ll i = 1; i <= mx; i = i << 1) {
        ll sum = 0;
        for (ll e : arr) {
            sum += ((e & i) > 0);
        }
        if (sum != 0) {
            sums.push_back(sum);
        }
    }
    ll mi = 1;
    if (sums.size() >= 1) {
        mi = sums[0];
        for (int i = 1; i < sums.size(); i++) {
            mi = __gcd(mi, sums[i]);
        }
    } else if (sums.size() == 0) {
        for (int i = 1; i <= n; i++) {
            cout << i << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= mi; i++) {
        if (mi % i == 0) {
            cout << i << ' ';
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