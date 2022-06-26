#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll hc, dc, hm, dm;
    cin >> hc >> dc >> hm >> dm;
    ll k, w, a;
    cin >> k >> w >> a;
    ll hct = hc;
    ll dct = dc;
    ll hmt = hm;
    for (ll p = 0; p <= k; p++) {
        hmt = hm;
        hct = hc;
        dct = dc;
        hct += p * a;
        dct += (k - p) * w;
        // simulation speed run
        ll moves = min((hmt + dct - 1) / dct, (hct + dm - 1) / dm);
        hct -= moves * dm;
        hmt -= moves * dct;
        if (hmt <= 0) {
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