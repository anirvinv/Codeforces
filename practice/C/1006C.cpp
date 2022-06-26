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
    fo(i, n) cin >> arr[i];
    map<ll, vector<ll>> occ;
    ll prefsum = 0;
    for (int i = 0; i < n; i++) {
        prefsum += arr[i];
        occ[prefsum].push_back(i);
    }
    ll suffsum = 0;
    for (int i = n - 1; i >= 0; i--) {
        suffsum += arr[i];
        if (occ[suffsum].size() == 1 && occ[suffsum][0] < i) {
            occ[suffsum].push_back(i);
        }
    }
    ll ans = 0;
    for (auto iter = occ.begin(); iter != occ.end(); ++iter) {
        if ((iter->second).size() == 2) {
            ans = max(ans, iter->first);
        }
    }
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}