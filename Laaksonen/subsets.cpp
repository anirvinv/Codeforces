#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

vector<vector<int>> subsets;

void solve() {
    subsets.clear();
    int n;
    cin >> n;
    vector<int> arr(n);
    fo(i, n) cin >> arr[i];

    ll t = (1ll << n);
    fo(i, t) {
        // check every bit
        vector<int> subset;
        ll b = 1;
        int include = 0;
        while (b <= i) {
            if ((b & i) != 0) {
                subset.push_back(arr[include]);
            }
            b = (b << 1);
            include++;
        }
        subsets.push_back(subset);
    }

    for (auto a : subsets) {
        cout << "{";
        for (auto i : a) {
            cout << i << " ";
        }
        cout << "}";
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