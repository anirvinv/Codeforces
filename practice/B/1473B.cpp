#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)

string srs(string s) {
    // returns shortest repeating sequence
    int l = 0;
    int r = l;
    int length = r - l + 1;
    while (r < s.length()) {
        for (int i = 0; i < s.length() - length + 1; i += length) {
            if (s.substr(i, length) != s.substr(l, length)) {
                r++;
                break;
            }
            if (i == s.length() - length) {
                return s.substr(l, length);
            }
        }
        length++;
    }
    return s;
}

void solve() {
    string s, t;
    cin >> s >> t;

    if (srs(s) != srs(t)) {
        cout << -1 << '\n';
        return;
    }

    string rep = srs(s);
    int occ1 = s.length() / rep.length();
    int occ2 = t.length() / rep.length();

    int lc = (occ1 * occ2) / __gcd(occ1, occ2);

    string result = "";
    fo(k, lc) { result += rep; }
    cout << result << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    // t= 1;
    while (q--) {
        solve();
    }
}