#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    string s;
    cin >> s;
    //
    if (s[0] == '1' && s[n - 1] == '0') {
        cout << "0" << '\n';
        return;
    }
    // substring that starts with a 1 and ends with a 0 can be replaced with 0
    int firstOne = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            firstOne = i;
            break;
        }
    }
    int lastZero = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            lastZero = i;
            break;
        }
    }
    if (firstOne == -1 || lastZero == -1 || firstOne > lastZero) {
        cout << s << '\n';
        return;
    }
    bool zero = false;
    for (int i = 0; i < n; i++) {
        if (i >= firstOne && i <= lastZero) {
            if (!zero) {
                cout << '0';
                zero = true;
            }
        }
        else {
            cout << s[i];
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