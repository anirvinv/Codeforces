#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
ll indexSum[200001];
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    fo(i, n) cin >> arr[i];
    memset(indexSum, 0, sizeof indexSum);
    int maxSum = 0;
    for (int idx = n - 1; idx >= 0; idx--) {
        int localSum = 0;
        for (int j = idx; j < n; j += arr[j]) {
            if (indexSum[j] > 0) {
                localSum += indexSum[j];
                break;
            }
            localSum += arr[j];
        }
        indexSum[idx] = localSum;
        maxSum = max(maxSum, localSum);
    }
    cout << maxSum << '\n';
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