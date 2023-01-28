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

    string s, t;
    cin >> s;
    cin >> t;
    int sn = s.length();
    int tn = t.length();
    F(i, 0, sn) {
        FE(r, 1, sn - i) {
            string p1 = s.substr(i, r);
            if (p1 == t) {
                cout << "YES\n";
                return;
            }
            F(l, 0, i + r - 1) {
                if (i + r - 1 - l + r == t.length()) {
                    p1 = s.substr(i, r);
                    string p2 = "";
                    if (i + r - l > 0) {
                        p2 = s.substr(l, i + r - 1 - l);
                    }
                    reverse(all(p2));
                    p1.append(p2);
                    if (p1 == t) {
                        cout << "YES\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "NO\n";
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