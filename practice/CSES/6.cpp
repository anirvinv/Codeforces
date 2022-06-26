#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(x) G(y);
    // for (n,1) if(n is odd) ==> n^2, else (n-1)^2 + 1
    if (x > y) {
        if (x % 2 == 0) {
            cout << x * x - (y - 1) << '\n';
        }
        else {
            cout << (x - 1) * (x - 1) + y << '\n';
        }
    }
    else {
        if (y % 2 == 1) {
            cout << y * y - (x - 1) << '\n';
        }
        else {
            cout << (y - 1) * (y - 1) + x << '\n';
        }
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