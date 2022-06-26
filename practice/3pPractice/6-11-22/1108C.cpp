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
void solve() {
    G(n);
    string s;
    cin >> s;
    if (n == 1) {
        cout << "0\n" << s << '\n';
        return;
    }
    if (n == 2) {
        if (s[0] != s[1]) {
            cout << "0\n" << s << '\n';
        }
        else {
            cout << "1\n";
            if (s[0] == 'R') {
                s[0] = 'G';
            }
            else { s[0] = 'R'; }
            cout << s << '\n';
        }
        return;
    }
    // check {"RGB", "RBG", "BGR", "BRG", "GBR", "GRB"}
    string match[6] = { "RGB", "RBG", "BGR", "BRG", "GBR", "GRB" };
    string ans = "";
    ll moves = LLONG_MAX;
    for (string pattern : match) {
        string tans = "";
        ll temp = 0;
        for (int i = 0; i < n;i++) {
            tans.push_back(pattern[i % 3]);
        }
        F(i, 0, n) {
            temp += tans[i] != s[i];
        }
        if (temp <= moves) {
            moves = temp;
            ans = tans;
        }
    }
    cout << moves << '\n';
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