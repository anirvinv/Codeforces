#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n;
    cin >> n;
    set<int> arr;
    fo(i, n) {
        int val;
        cin >> val;
        arr.insert(val);
    }
    vector<int> s(arr.size());
    int i = 0;
    for (auto iter = arr.begin(); iter != arr.end(); iter++) {
        s[i++] = (*iter);
    }
    if (arr.size() > 3) {
        cout << -1 << '\n';
        return;
    }
    if (arr.size() == 1) {
        cout << 0 << '\n';
        return;
    }
    if (arr.size() == 2) {
        if ((s[0] + s[1]) % 2 == 0) {
            cout << abs(s[1] - (s[0] + s[1]) / 2) << '\n';
            return;
        } else {
            cout << abs(s[0] - s[1]) << '\n';
        }
        return;
    }
    if (abs(s[0] - s[1]) == abs(s[1] - s[2])) {
        cout << abs(s[0] - s[1]) << '\n';
    } else {
        cout << -1 << '\n';
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