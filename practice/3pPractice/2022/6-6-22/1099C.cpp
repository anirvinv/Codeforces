#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define F(i,L,R) for (int i = (L); i < (R); i++)
#define FE(i,L,R) for (int i = (L); i <= (R); i++)
#define FF(i,L,R) for (int i = (L); i > (R); i--)
#define FFE(i,L,R) for (int i = (L); i >= (R); i--)
#define G(x) ll x; cin >> x;
#define all(x) begin(x), end(x)
#define debug(x) cout << #x << " " << x << '\n'
#define MOD 1000000007 //998244353
bool letter(char c) {
    return c != '?' && c != '*';
}

void solve() {
    string s;
    cin >> s;
    G(k);
    ll q = 0, st = 0;
    for (char c : s) {
        q += c == '?';
        st += c == '*';
    }
    ll n = s.length() - (q + st);
    if (k == n) {
        string a = "";
        F(i, 0, s.length()) { if (letter(s[i])) a.push_back(s[i]); }
        cout << a << '\n';
        return;
    }
    string ans = "";
    if (k > n) {
        if (!st) { cout << "Impossible\n"; return; }
        bool done = false;
        F(i, 0, s.length() - 1) {
            if (s[i + 1] == '*' && !done) {
                ans.push_back(s[i]);
                F(j, 0, k - n) {
                    ans.push_back(s[i]);
                }
                done = true;
            }
            else if (letter(s[i])) {
                ans.push_back(s[i]);
            }
        }
    }
    else {
        if (st + q < n - k) {
            cout << "Impossible\n";
            return;
        }
        F(i, 0, s.length() - 1) {
            if (letter(s[i]) && letter(s[i + 1])) {
                ans.push_back(s[i]);
            }
            else {
                if (n > k) {
                    if (letter(s[i]) && !letter(s[i + 1])) {
                        n--;
                        i++;
                    }
                }
                else if (letter(s[i])) {
                    ans.push_back(s[i]);
                }
            }
        }
    }
    if (letter(s.back())) ans.push_back(s.back());
    cout << ans << '\n';
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