#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

bool isPrime(ll x) {
    if (x == 1) return false;
    if (x == 2) return true;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void solve() {
    G(x) G(d);
    ll t = x;
    ll ds = 0;

    while (t % d == 0) {
        ds++;
        t /= d;
    }
    if (ds == 1) {
        cout << "NO" << '\n';
        return;
    }
    if (ds == 2) {
        if (!isPrime(t) && t != 1) {
            cout << "YES" << '\n';
            return;
        }
        cout << "NO" << '\n';
        return;
    }
    if (ds == 3) {
        // if t is composite
        if (!isPrime(t) && t != 1) {
            cout << "YES" << '\n';
            return;
        }
        if (isPrime(d) && isPrime(t)) {
            cout << "NO" << '\n';
            return;
        }
        if (d == t * t) {
            cout << "NO" << '\n';
            return;
        }
    }

    if (!isPrime(d) || (!isPrime(t) && t != 1)) {
        cout << "YES" << '\n';
        return;
    }
    if (isPrime(d) && (t == 1 || isPrime(t))) {
        cout << "NO" << '\n';
        return;
    }
    // t is prime

    cout << "YES" << '\n';
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