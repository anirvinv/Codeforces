#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int n, u, v;
    cin >> n >> u >> v;
    vector<int> arr(n);
    fo(i, n) cin >> arr[i];
    fo(i, n - 1) {
        if (abs(arr[i] - arr[i + 1]) > 1) {
            cout << 0 << '\n';
            return;
        }
    }
    fo(i, n - 1) {
        if ((arr[i] - arr[i + 1] == 1) || (arr[i] - arr[i + 1] == -1)) {
            cout << min(u, v) << '\n';
            return;
        }
    }
    cout << v + min(u, v) << '\n';
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