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
    int total = 0;
    fo(i, n) {
        cin >> arr[i];
        total += arr[i];
    }
    int minDiff = INT_MAX;
    for (int i = 0; i < n; i++) {
        }
    cout << minDiff << '\n';
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