#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    fo(i, n) { cin >> arr[i]; }
    if (k > 9801) {
        cout << -1 << '\n';
        return;
    }
    int pos = 0;
    fo(j, k) {
        bool shit = false;
        fo(i, n - 1) {
            if (arr[i] < arr[i + 1]) {
                arr[i]++;
                pos = i;
                shit = true;
                break;
            }
        }
        if (!shit) {
            cout << -1 << '\n';
            return;
        }
    }
    cout << pos + 1 << '\n';
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