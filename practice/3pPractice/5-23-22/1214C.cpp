#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'

bool correct(string s) {
    stack<char> brackets;
    for (char c : s) {
        if (c == '(') {
            brackets.push(c);
        }
        else {
            if (brackets.size() == 0 || brackets.top() != '(') {
                return false;
            }
            else {
                brackets.pop();
            }
        }
    }
    if (brackets.size() == 0) {
        return true;
    }
    return false;
}

void solve() {
    G(n);
    string s;
    cin >> s;
    ll a = 0;
    ll m = 2;
    int b = 0;
    int k = 0;
    for (char c : s) {
        if (c == '(') {
            b++;
            a++;
        }
        else {
            k++;
            a--;
        }
        m = min(a, m);
    }
    if (b != k) {
        cout << "No" << '\n';
        return;
    }
    if (m < -1) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
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