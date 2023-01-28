#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i,L,R) for (int i = (L); i < (R); i++)
#define FE(i,L,R) for (int i = (L); i <= (R); i++)
#define FF(i,L,R) for (int i = (L); i > (R); i--)
#define FFE(i,L,R) for (int i = (L); i >= (R); i--)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007 //998244353
void solve() {
    G(n) G(q);

    vector<ll> pfs(n);
    vector<ll> pfm(n);
    vector<ll> a(n);
    vector<ll> k(q);

    F(i, 0, n) cin >> a[i];
    F(i, 0, q) cin >> k[i];

    F(i, 0, n) {
        if (i != 0) {
            pfs[i] += pfs[i - 1] + a[i];
            pfm[i] = max(pfm[i - 1], a[i]);
        }
        else {
            pfs[i] = a[i];
            pfm[i] = a[i];
        }
    }
    for (ll qu : k) {
        // binary search the prefix maxes
        auto it = upper_bound(all(pfm), qu);

        if (it == pfm.end()) {
            cout << pfs[n - 1] << " ";
        }
        else if (it == pfm.begin()) {
            cout << "0 ";
        }
        else {
            it--;
            cout << (pfs[it - pfm.begin()]) << " ";
        }
        // debug(it - pfs.begin());
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