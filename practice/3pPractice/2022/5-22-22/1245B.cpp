#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, n) for (int i = 0; i < n; i++)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
void solve() {
    G(n);
    ll a, b, c;
    cin >> a >> b >> c;
    string hand;
    cin >> hand;
    ll r = 0, p = 0, s = 0;
    for (char c : hand) {
        r += (c == 'R');
        p += (c == 'P');
        s += (c == 'S');
    }
    vector<char> ans(n, 'A');
    F(i, n) {
        if (hand[i] == 'R' && b) {
            ans[i] = 'P';
            b--;
        }
    }
    F(i, n) {
        if (hand[i] == 'P' && c) {
            ans[i] = 'S';
            c--;
        }
    }
    F(i, n) {
        if (hand[i] == 'S' && a) {
            ans[i] = 'R';
            a--;
        }
    }
    vector<char> unused;
    F(i, a) { unused.push_back('R'); }
    F(i, b) { unused.push_back('P'); }
    F(i, c) { unused.push_back('S'); }

    F(i, n) {
        if (ans[i] == 'A') {
            ans[i] = unused.back();
            unused.pop_back();
        }
    }
    ll wins = 0;
    F(i, n) {
        if (ans[i] == 'R' && hand[i] == 'S') wins++;
        if (ans[i] == 'P' && hand[i] == 'R') wins++;
        if (ans[i] == 'S' && hand[i] == 'P') wins++;
    }
    if (wins >= (n + 1) / 2) {
        cout << "YES\n";
        for (char c : ans) {
            cout << c;
        }
        cout << '\n';

    }
    else {
        cout << "NO" << '\n';
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