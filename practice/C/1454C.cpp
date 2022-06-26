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
    vector<int> shrink;
    fo(i, n) cin >> arr[i];

    map<int, vector<int>> occ;
    for (int i = 0; i < n; i++) {
        int start = i;
        int e = arr[i];
        shrink.push_back(e);
        occ[e] = vector<int>();
        while (arr[start] == e) {
            start++;
        }
        i = start - 1;
    }

    for (int i = 0; i < shrink.size(); i++) {
        occ[shrink[i]].push_back(i);
    }

    int ans = INT_MAX;
    for (auto iter = occ.begin(); iter != occ.end(); ++iter) {
        int segments = (iter->second).size() + 1;
        if ((iter->second)[0] == 0) {
            segments--;
        }
        if ((iter->second)[(iter->second).size() - 1] == shrink.size() - 1) {
            segments--;
        }
        ans = min(ans, segments);
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