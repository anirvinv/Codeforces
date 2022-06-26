#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
bool isSorted(vector<ll> a) {
    if (a.size() == 0) {
        return true;
    }
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] > a[i + 1]) return false;
    }
    return true;
}
void solve() {
    int n;
    cin >> n;
    vector<ll> odds;
    vector<ll> evens;
    fo(i, n) {
        ll val;
        cin >> val;
        if (val & 1) {
            odds.push_back(val);
        } else {
            evens.push_back(val);
        }
    }
    cout << ((isSorted(odds) && isSorted(evens)) ? "Yes" : "No") << '\n';
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