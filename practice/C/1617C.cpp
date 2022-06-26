#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n;
    cin >> n;

    set<int> check;
    for (int i = 1; i <= n; i++) check.insert(i);

    vector<int> arr(n);
    vector<int> rest;
    fo(i, n) {
        cin >> arr[i];
        if (check.find(arr[i]) != check.end()) {
            check.erase(arr[i]);
        } else {
            rest.push_back(arr[i]);
        }
    }
    sort(all(rest));
    reverse(all(rest));

    for (int &x : rest) {
        auto iter = check.end();
        iter--;
        int val = (x - 1) / 2;
        int rem = (*iter);
        if (rem > val) {
            cout << -1 << '\n';
            return;
        }
        check.erase(iter);
    }
    cout << rest.size() << '\n';
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