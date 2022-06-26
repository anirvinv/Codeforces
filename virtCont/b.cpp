#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
int occ[200];
int check[200];

bool func() {
    for (int i = 'a'; i <= 'z'; i++) {
        if (occ[i] > 0 && check[i] == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    string s;
    cin >> s;
    memset(check, 0, sizeof check);
    memset(occ, 0, sizeof occ);
    for (char c : s) {
        occ[c]++;
    }
    int ptr = s.size() - 1;
    while (ptr >= 0) {
        check[s[ptr--]]++;
        if (func()) break;
    }
    for (int i = ptr + 1; i < s.size(); i++) {
        cout << s[i];
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