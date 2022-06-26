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
    vector<ll> a(n);
    map<ll, ll> occ;
    F(i, n) {
        cin >> a[i];
        occ[a[i]]++;
    }
    ll sum = 0;
    for (auto iter = occ.begin(); iter != occ.end(); ++iter) {
        if (iter->second > 1) {
            sum += iter->second - 1;
        }
    }
    vector<ll> rev;
    ll d = n;
    F(i, n) {
        if (sum-- > 0) {
            rev.push_back(d--);
        } else {
            rev.push_back(d);
        }
    }
    reverse(all(rev));
    for (ll e : rev) {
        cout << e << " ";
    }
    cout << '\n';
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