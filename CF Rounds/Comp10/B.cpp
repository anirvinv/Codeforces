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
    fo(i, n) cin >> arr[i];
    sort(all(arr));
    int k = 1;
    int i = 0;
    while (i < n) {
        while (k > arr[i] && i < n) {
            i++;
        }
        if (i == n) {
            break;
        }
        k++;
        i++;
    }
    cout << k - 1 << '\n';
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