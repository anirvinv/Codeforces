#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    fo(i, n) { cin >> arr[i]; }
    sort(all(arr));
    int mi = arr[0];
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        ans += max(0, (k - arr[i]) / mi);
    }
    cout << ans << '\n';
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