#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

void solve() {
    int a, b;
    cin >> a >> b;
    int ta = a;
    int tb = b;
    int ops1 = 0;
    int ops2 = 0;
    while (a != b) {
        // bitmask
        if ((a & b) != a) {
            b++;
            ops1++;
        } else {
            a |= b;
            ops1++;
        }
    }
    a = ta;
    b = tb;
    while (a != b) {
        // bitmask
        if ((a & b) != a) {
            a++;
            ops2++;
        } else {
            a |= b;
            ops2++;
        }
    }
    cout << min(ops1, min(ops2, tb - ta)) << '\n';
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

    // int a = 0b1011;
    // for (int i = 0; i <= (int)log2(a); i++) {
    //     cout << ((a & (1 << i)) != 0) << ' ';
    // }
}