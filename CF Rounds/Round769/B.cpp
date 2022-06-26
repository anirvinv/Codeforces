#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

int digits(int t) {
    int digs = 0;
    while (t > 0) {
        t /= 2;
        digs++;
    }
    return digs;
}

void solve() {
    int n;
    cin >> n;
    int digs = digits(n - 1);
    for (int i = n - 1; i >= 0; i--) {
        if (digits(i) == digs) {
            cout << i << ' ';
        } else {
            break;
        }
    }
    for (int i = 0; i <= n - 1; i++) {
        if (digits(i) != digs) {
            cout << i << ' ';
        }
    }
    cout << '\n';
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