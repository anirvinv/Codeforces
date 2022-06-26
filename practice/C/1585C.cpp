#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> pos;
    vector<ll> neg;
    ll maxVal = -1;
    fo(i, n) {
        ll val;
        cin >> val;
        if (val >= 0)
            pos.push_back(val);
        else
            neg.push_back(val);
        maxVal = max(maxVal, abs(val));
    }
    pos.push_back(0);
    neg.push_back(0);
    if (pos.size() > 1) {
        sort(all(pos));
    }
    if (neg.size() > 1) {
        sort(all(neg));
        reverse(all(neg));
    }
    ll sum = 0;
    ll pSize = pos.size();
    ll nSize = neg.size();

    for (int i = pSize - 1; i >= 0; i -= k) {
        sum += 2 * pos[i];
    }
    for (int i = nSize - 1; i >= 0; i -= k) {
        sum += -2 * neg[i];
    }

    cout << sum - maxVal << '\n';
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