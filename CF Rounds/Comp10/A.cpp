#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    vector<int> arr(4);
    fo(i, 4) { cin >> arr[i]; }
    sort(all(arr));
    cout << arr[3] - arr[2] << " " << arr[3] - arr[1] << " " << arr[3] - arr[0]
         << '\n';
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