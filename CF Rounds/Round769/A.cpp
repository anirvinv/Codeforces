#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ones = 0;
    int zeroes = 0;
    for (int i = 0; i < n; i++) {
        ones += s[i] == '1';
        zeroes += s[i] == '0';
    }
    if (n > 2) {
        cout << "NO" << '\n';
    } else {
        if (s[0] == '0') {
            cout << (zeroes == 1 ? "YES" : "NO") << '\n';
        } else {
            cout << (ones == 1 ? "YES" : "NO") << '\n';
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