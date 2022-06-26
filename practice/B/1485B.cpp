#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int n, q, k;
    cin >> n >> q >> k;
    vector<int> A(n);
    fo(i, n) { cin >> A[i]; }
    vector<int> sumDiffs;
    sumDiffs.push_back(0);
    int sum = 0;
    fo(i, n - 1) {
        sum += A[i + 1] - A[i];
        sumDiffs.push_back(sum);
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int ans = (A[l] - 1) + (k - A[r]);
        ans += 2 * (sumDiffs[r] - sumDiffs[l]);
        ans -= 2 * (r - l);
        cout << ans << '\n';
    }
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