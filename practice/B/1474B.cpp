#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)

bool isPrime(ll x) {
    if (x == 2) {
        return true;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    ll d;
    cin >> d;

    ll div1 = 1 + d;
    while (!isPrime(div1)) {
        div1++;
    }
    ll div2 = div1 + d;
    while (!isPrime(div2)) {
        div2++;
    }
    cout << div2 * div1 << '\n';
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