#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    ll N;
    cin >> N;
    int digits[10];
    memset(digits, 0, sizeof digits);
    ll temp = N;
    ll totalDigits = 0;
    while (temp > 0) {
        digits[temp % 10]++;
        temp /= 10;
        totalDigits++;
    }
    bool filled = true;
    for (int f : digits) {
        filled &= (f > 0);
    }
    if (filled) {
        cout << "Impossible" << '\n';
    } else {
        string stringVal = to_string(N);

        int first = stringVal[0] - '0';
        int ptr = first;
        string upper = "";
        if (first != 9) {
            while (ptr < 10) {
                if (digits[ptr] == 0) break;
                ptr++;
            }
            upper = "";
            if (ptr != 10) {
                upper = to_string(ptr);
            }
            ptr = 0;
            while (digits[ptr] != 0) {
                ptr++;
            }
            fo(k, totalDigits - 1) { upper += to_string(ptr); }
        } else {
            ptr = 1;
            while (ptr < 10) {
                if (digits[ptr] == 0) break;
                ptr++;
            }
            upper = "";
            if (ptr != 10) {
                upper = to_string(ptr);
            }
            ptr = 0;
            while (digits[ptr] != 0) {
                ptr++;
            }
            fo(k, totalDigits) { upper += to_string(ptr); }
        }

        //--------------------------------------------------------
        string lower = "";
        if (first != 1) {
            ptr = first;
            while (ptr < 10) {
                if (digits[ptr] == 0) break;
                ptr--;
            }
            lower = "";
            if (ptr != 10) {
                lower = to_string(ptr);
            }
            ptr = 9;
            while (digits[ptr] != 0) {
                ptr--;
            }
            fo(k, totalDigits - 1) { lower += to_string(ptr); }
        } else {
            if (N == 1) {
                lower = "0";
            } else {
                ptr = 9;
                while (ptr < 10) {
                    if (digits[ptr] == 0) break;
                    ptr--;
                }
                lower = to_string(ptr);

                ptr = 9;
                while (digits[ptr] != 0) {
                    ptr--;
                }
                fo(k, totalDigits - 2) { lower += to_string(ptr); }
            }
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