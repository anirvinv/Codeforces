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
    map<int, int> occ;
    fo(i, n) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j != i) {
                occ[arr[i] + arr[j]]++;
            }
        }
    }
    int msum = 0;
    for (auto iter = occ.begin(); iter != occ.end(); ++iter) {
        msum = max(msum, iter->second);
    }
    cout << msum / 2 << '\n';
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