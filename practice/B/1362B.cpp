#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
int check[1025];
int occ[2025];
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    memset(check, 0, sizeof check);
    fo(i, n) {
        cin >> arr[i];
        check[arr[i]]++;
    }
    for (int i = 1; i <= 1024; i++) {
        memset(occ, 0, sizeof occ);
        for (int e : arr) {
            occ[i ^ e]++;
        }
        for (int j = 0; j < n; j++) {
            if (check[arr[j]] != occ[arr[j]]) {
                break;
            }
            if (j == n - 1) {
                cout << i << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
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