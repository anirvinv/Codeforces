#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n) G(x);
    vector<int> a(n);
    ll sum = 0;
    // how many days can you buy all packs for, and then increment with all but last, and then all buyt last and second last...
    F(i, n) { cin >> a[i]; sum += a[i]; }
    sort(all(a));
    ll packs = 0;
    ll days = 0;
    while (a.size() > 0) {
        if (x >= sum) {
            if ((x - sum) / a.size()) {
                packs += a.size() * ((x - sum) / a.size());
                days += (x - sum) / a.size();
                sum += (x - sum) / a.size() * a.size();
            }
            else {
                packs += a.size();
                days++;
                sum += a.size();
            }
        }
        else {
            sum -= (a.back() + days);
            a.pop_back();
        }
    }
    cout << packs << '\n';
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