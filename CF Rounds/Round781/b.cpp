#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    // find the most occurring element, and then make a copy, and then make a
    // copy which basically doubles the thing each time

    vector<ll> arr(n);
    map<ll, ll> occ;
    F(i, n) {
        cin >> arr[i];
        occ[arr[i]]++;
    }
    ll oc = 0;
    ll num = 0;
    for (auto iter = occ.begin(); iter != occ.end(); ++iter) {
        if (iter->second > oc) {
            oc = iter->second;
            num = iter->first;
        }
    }
    // n - oc is number of things that need to be filled
    // we have occ and it doubles every time.
    ll left = n - oc;
    ll ans = 0;
    while (left != 0) {
        // make a copy
        if (left >= oc) {
            left -= oc;
            ans += oc + 1;
            // replace all of them and add cost to make a copy
        } else {
            ans += left + 1;
            break;
        }
        oc = min(2 * oc, n);
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