#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    fo(i, n) { cin >> arr[i]; }
    reverse(all(arr));
    int first = arr[0];
    int idx = 0;
    ll ops = 0;
    while (idx < n) {
        while (idx < n && arr[idx] == first) {
            idx++;
        }
        if (idx == n) {
            break;
        } else {
            ops++;
            idx = 2 * idx;
        }
    }

    cout << ops << '\n';
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