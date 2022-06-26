#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
void solve() {
    string s;
    cin >> s;
    int count = 0;
    for (char c : s) {
        count += c == '?';
    }
    if (count % 2 != 0) {
        cout << "NO" << '\n';
        return;
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' && i == s.length() - 1) {
            cout << "NO" << '\n';
            return;
        }
        if (s[i] == ')' && i == 0) {
            cout << "NO" << '\n';
            return;
        }
    }
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