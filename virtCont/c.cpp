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
    // a b c d choose 3rd
    // a-c b-c d-c choose 1st
    // b-c-(a-c) d-c-(a-c) choose 1st
    // d-c-(a-c) - (b-c-(a-c))
    // 7 - 2 - (4 - 2) - (2 - 2 - 2)
    G(n);
    G(k);
    vector<ll> a(n);
    map<int, int> occ;
    F(i, n) {
        cin >> a[i];
        occ[a[i]]++;
    }
    F(i, n) {
        if (occ[a[i] - k]) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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