#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
vector<int> indarr[150001];
void solve() {
    for (auto &v : indarr) {
        v.clear();
    }
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> occ;
    set<int> s;
    fo(i, n) {
        cin >> arr[i];
        s.insert(arr[i]);
        occ[arr[i]]++;
        indarr[arr[i]].push_back(i);
    }
    if (s.size() == n) {
        cout << -1 << '\n';
        return;
    }
    int ans = -1;
    for (auto iter = occ.begin(); iter != occ.end(); iter++) {
        if (iter->second > 1) {
            for (int i = 0; i < indarr[iter->first].size() - 1; i++) {
                ans = max(ans, n - indarr[iter->first][i + 1] +
                                   indarr[iter->first][i]);
            }
        }
    }
    cout << ans << '\n';
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