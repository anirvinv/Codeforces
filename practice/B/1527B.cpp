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
    int zc = 0;
    fo(i, n) {
        cin >> arr[i];
        zc += arr[i] == 0;
    }
    if (zc == 0) {
        cout << "NO" << '\n';
        return;
    }
    vector<int> indices;
    int totalOnes = n - zc;
    while (totalOnes > 0) {
        int temp = totalOnes;
        for (int i = 0; i < n - 2; i++) {
            int ones = 0;
            ones += arr[i] + arr[i + 1] + arr[i + 2];
            if (ones == 2) {
                if (find(all(indices), i) == indices.end()) {
                    indices.push_back(i);
                }
                arr[i] = 0;
                arr[i + 1] = 0;
                arr[i + 2] = 0;
                totalOnes -= 2;
            }
        }
        if (totalOnes == temp) {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';
    cout << indices.size() << '\n';
    if (indices.size() > 0) {
        for (auto i : indices) {
            cout << (i + 1) << " ";
        }
        cout << '\n';
    }
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