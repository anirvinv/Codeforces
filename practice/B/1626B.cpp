#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    string s;
    cin >> s;
    bool bruh = false;
    for (int i = s.length() - 1; i >= 1; i--) {
        int v1 = s[i] - '0';
        int v2 = s[i - 1] - '0';
        if (v1 + v2 >= 10) {
            s[i - 1] = (char)(((v1 + v2) / 10) + '0');
            s[i] = (char)(((v1 + v2) % 10) + '0');
            break;
        }
        if (i == 1) {
            s[1] = (char)((v1 + v2) + '0');
            bruh = true;
            break;
        }
    }

    if (bruh) {
        for (int i = 1; i < s.length(); i++) {
            cout << s[i];
        }
        cout << '\n';
    } else {
        cout << s << '\n';
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