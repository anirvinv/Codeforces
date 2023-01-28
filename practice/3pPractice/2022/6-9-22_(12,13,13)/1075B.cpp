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
    G(n) G(m);
    vector<ll> a(n + m);
    F(i, 0, n + m) {
        cin >> a[i];
    }
    ll isTaxi[n + m];
    F(i, 0, n + m) {
        cin >> isTaxi[i];
    }
    map<ll, ll> ti;
    vector<ll> taxi;
    // {cood, #riders}
    F(i, 0, a.size()) {
        if (isTaxi[i]) {
            ti[a[i]] = i;
            taxi.push_back(a[i]);
        }
    }

    int tp = 0;
    int i = 0;
    while (i < a.size()) {
        if (isTaxi[i]) {
            i++;
        }
        else {
            ll u = -1;
            ll l = -1;
            if (upper_bound(all(taxi), a[i]) != taxi.begin()) {
                l = *(upper_bound(all(taxi), a[i]) - 1);
            }
            if (upper_bound(all(taxi), a[i]) != taxi.end()) {
                u = *upper_bound(all(taxi), a[i]);
            }

            // debug(a[i]);
            // debug(u);
            // debug(l);
            if (u != -1 && l != -1) {
                if (abs(l - a[i]) <= abs(u - a[i])) {
                    isTaxi[ti[l]]++;
                }
                else {
                    isTaxi[ti[u]]++;
                }
            }
            else if (u != -1) {
                isTaxi[ti[u]]++;
            }
            else if (l != -1) {

                isTaxi[ti[l]]++;
            }
            i++;
        }
    }
    F(i, 0, n + m) {
        if (isTaxi[i]) {
            cout << isTaxi[i] - 1 << " ";
        }
    }
    cout << '\n';
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