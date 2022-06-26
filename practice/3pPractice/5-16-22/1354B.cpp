#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    bool one = 0;
    bool two = 0;
    bool thre = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') { one = 1; }
        else if (s[i] == '2') { two = 1; }
        else {
            thre = 1;
        }
    }
    if (!(one && two && thre)) {
        cout << 0 << '\n';
        return;
    }
    // n >= 3
    int left = 0;
    while (left < n && s[left] == s[0]) {
        left++;
    }
    left--;
    int right = left;

    int length = INT_MAX;
    int occ[4];
    occ[1] = 0;
    occ[2] = 0;
    occ[3] = 0;
    while (right < n) {
        while ((occ[1] == 0 || occ[2] == 0 || occ[3] == 0) && right < n) {
            occ[s[right] - '0']++;
            right++;
        }
        while ((occ[1] > 0 && occ[2] > 0 && occ[3] > 0) && left < right) {
            occ[s[left] - '0']--;
            left++;
        }
        length = min(length, right - left + 1);
    }
    cout << length << '\n';
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