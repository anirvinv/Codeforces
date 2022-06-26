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
    string result = s.substr(0, 1);
    int current = 0;
    char last = s[0];
    for (int i = 1; i < n; i++) {
        if (current % 2 == 0) {
            while (i < n && (s[i] == last)) {
                i++;
            }
            if (i == n) {
                break;
            }
            result.push_back(s[i]);
            last = s[i];

        } else {
            result.push_back(s[i]);
            last = s[i];
        }
        current++;
    }
    if (result.length() % 2 == 0) {
        cout << s.length() - result.length() << '\n';
        cout << result << '\n';
    } else {
        cout << s.length() - result.length() + 1 << '\n';
        if (result.length() != 1) {
            cout << result.substr(0, result.length() - 1) << '\n';
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
}