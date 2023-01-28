#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

ll minDigit(ll a1) {
    ll minDigit = 9;
    while (a1) { minDigit = min(minDigit, a1 % 10); a1 /= 10; }
    return minDigit;
}
ll maxDigit(ll a1) {

    ll maxDigit = 0;
    while (a1) { maxDigit = max(maxDigit, a1 % 10); a1 /= 10; }
    return maxDigit;
}

void solve() {
    G(a1) G(K);
    for (int i = 0; i < K - 1; i++) {
        if (minDigit(a1) == 0) {
            cout << a1 << '\n';
            return;
        }
        a1 = a1 + minDigit(a1) * maxDigit(a1);
    }
    cout << a1 << '\n';

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