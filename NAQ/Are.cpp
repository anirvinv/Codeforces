#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll N;
    cin >> N;
    string s = to_string(N);
    if (N == 1) {
        cout << 0 << " " << 2 << '\n';
        return;
    }
    bool digits[10];
    memset(digits, 0, sizeof digits);

    bool impossible = true;
    for (char c : s) {
        digits[c - '0'] = true;
    }
    for (bool b : digits) {
        impossible &= b;
    }
    if (impossible) {
        cout << "Impossible" << '\n';
    } else {  // find lower bound
        string lower = "";
        int first = s[0] - '0';
        int fd = first;

        bool onlyZero = digits[0];
        bool nonZero = true;
        for (int i = 1; i < 10; i++) {
            nonZero &= digits[i];
        }
        if (!onlyZero && nonZero) {
            // get fkde
            cout << 0 << '\n';
            return;
        } else {
            while (digits[fd]) {
                fd--;
                if (fd == 0) {
                    fd = 9;
                }
            }
            if (fd > first) {
                fo(j, s.size() - 1) { lower += (char)('0' + fd); }

            } else {
                lower += (char)(fd + '0');
                // find max digit that doesnt exist
                int mdde = 9;
                while (digits[mdde]) {
                    mdde--;
                }
                fo(j, s.size() - 1) { lower += (char)('0' + mdde); }
            }
        }

        // find upper bound
        string upper = "";
        fd = first;
        while (digits[fd]) {
            fd++;
            if (fd == 10) {
                fd = 1;
            }
        }
        int ptr = 0;
        while (digits[ptr]) {
            ptr++;
        }
        if (fd < first) {
            upper += (char)(fd + '0');
            fo(i, s.size()) { upper += (char)('0' + ptr); }

        } else {
            // same digits
            upper += (char)(fd + '0');

            fo(j, s.size() - 1) { upper += (char)('0' + ptr); }
        }

        string::size_type l = 0;
        string::size_type o = 0;
        ll up = stoll(upper, &l, 0);
        ll lo = stoll(lower, &o, 0);
        if (abs(up - N) < abs(lo - N)) {
            cout << up << '\n';
        } else if (abs(up - N) == abs(lo - N)) {
            cout << lo << " " << up << '\n';
        } else {
            cout << lo << '\n';
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