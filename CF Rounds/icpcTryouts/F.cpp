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
    fo(i, n) {
        cin >> arr[i];
        occ[arr[i]]++;
    }
    // fo(i, n) { cout << arr[i] << '\n'; }
    if (arr.size() > 1) {
        sort(all(arr));
    }
    int left = arr.size();
    left = occ[arr[arr.size() - 1]] - 1;
    if (left == 0) {
        cout << "Conan" << '\n';

    } else {
        if (left % 2 == 1) {
            cout << "Agasa" << '\n';
        } else {
            cout << "Conan" << '\n';
        }
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