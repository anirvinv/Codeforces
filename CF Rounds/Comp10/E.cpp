#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n;
    cin >> n;
    vector<ll> divisors(n);
    fo(i, n) cin >> divisors[i];
    ll lcm = divisors[0];
    for (int i = 1; i < divisors.size(); i++) {
        lcm = (lcm * divisors[i]) / __gcd(lcm, divisors[i]);
        if (lcm > 1e12) {
            cout << -1 << '\n';
            return;
        }
    }
    sort(all(divisors));
    if (find(all(divisors), lcm) != divisors.end()) {
        lcm = divisors[0] * divisors[divisors.size() - 1];
    }
    for (int i = 2; i <= sqrtl(lcm); i++) {
        if (lcm % i == 0) {
            if (find(all(divisors), i) == divisors.end() ||
                find(all(divisors), lcm / i) == divisors.end()) {
                cout << -1 << '\n';
                return;
            }
        }
    }
    cout << lcm << '\n';
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