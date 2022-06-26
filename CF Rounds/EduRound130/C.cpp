#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i, L, R) for (int i = (L); i < (R); i++)
#define FE(i, L, R) for (int i = (L); i <= (R); i++)
#define FF(i, L, R) for (int i = (L); i > (R); i--)
#define FFE(i, L, R) for (int i = (L); i >= (R); i--)
#define G(x) \
    ll x;    \
    cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007  // 998244353

void displayvec(vector<ll>& x) {
    cout << "displaying:\n";
    for (ll e : x) {
        cout << e << " ";
    }
    cout << '\n';
}

void solve() {
    G(n);
    string s, t;
    cin >> s >> t;
    vector<ll> a;
    vector<ll> c;
    vector<ll> a1;
    vector<ll> c1;
    int bcount = 0;
    F(i, 0, n) {
        if (s[i] == 'a') {
            a.push_back(bcount);
        } else if (s[i] == 'b') {
            bcount++;
        }
    }
    bcount = 0;
    FFE(i, n - 1, 0) {
        if (s[i] == 'c') {
            c.push_back(bcount);
        } else if (s[i] == 'b') {
            bcount++;
        }
    }

    bcount = 0;
    F(i, 0, n) {
        if (t[i] == 'a') {
            a1.push_back(bcount);
        } else if (t[i] == 'b') {
            bcount++;
        }
    }
    bcount = 0;
    FFE(i, n - 1, 0) {
        if (t[i] == 'c') {
            c1.push_back(bcount);
        } else if (t[i] == 'b') {
            bcount++;
        }
    }
    if ((a1.size() != a.size()) || (c1.size() != c.size())) {
        cout << "NO\n";
        return;
    }

    F(i, 0, a.size()) {
        if (a1[i] < a[i]) {
            cout << "NO\n";
            return;
        }
    }

    F(i, 0, c.size()) {
        if (c1[i] < c[i]) {
            cout << "NO\n";
            return;
        }
    }

    int ac = 0, bc = 0, cc = 0, ac1 = 0, bc1 = 0, cc1 = 0;
    F(i, 0, n) {
        ac += s[i] == 'a';
        bc += s[i] == 'b';
        cc += s[i] == 'c';

        ac1 += t[i] == 'a';
        bc1 += t[i] == 'b';
        cc1 += t[i] == 'c';
    }
    vector<char> one;
    vector<char> two;
    for (char c : s) {
        if (c == 'c' || c == 'a') {
            one.push_back(c);
        }
    }
    for (char c : t) {
        if (c == 'c' || c == 'a') {
            two.push_back(c);
        }
    }
    F(i, 0, one.size()) {
        if (one[i] != two[i]) {
            cout << "NO\n";
            return;
        }
    }

    if (ac == ac1 && bc == bc1 && cc == cc1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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