#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(m);
    fo(i, m) cin >> arr[i];

    ll traversed[n + 1];
    string ans = "";
    memset(traversed, 0, sizeof traversed);
    int ptr = 1;
    for (int i = 0; i < m; i++) {
        traversed[arr[i]]++;
        while (ptr <= n && traversed[ptr] > 0) {
            traversed[ptr]--;
            ptr++;
        }
        if (ptr == n + 1) {
            ptr = 1;
            ans += '1';
        } else {
            ans += "0";
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