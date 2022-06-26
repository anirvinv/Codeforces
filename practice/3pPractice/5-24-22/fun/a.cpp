#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

bool isPrime(ll x) {
    for (ll i = 2; i < sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    G(n);
    string r;
    cin >> r;
    string b;
    cin >> b;

    ll rW = 0;
    ll bW = 0;
    F(i, n) {
        rW += r[i] > b[i];
        bW += r[i] < b[i];
    }

    if (rW == bW) {
        cout << "EQUAL" << '\n';
    }
    else if (rW > bW) {
        cout << "RED" << '\n';
    }
    else {
        cout << "BLUE" << '\n';
    }
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