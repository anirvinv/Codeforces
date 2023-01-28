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
    string s; cin >> s;
    int n = s.length();

    string k = s.substr(0, 3);
    if ((k == "abb" || k == "baa") && n > 3) {
        if (k == "abb") {
            cout << "ab ";
            for (int i = 2; i < n - 1; i++) {
                cout << s[i];
            }
            cout << " " << s.back() << '\n';
        }
        else {
            cout << s.substr(0, 2) << " " << s[2] << " " << s.substr(3, n - 3) << '\n';
        }
        return;
    }
    else {
        cout << s[0] << " " << s[1] << " " << s.substr(2, n - 2) << '\n';
        return;
    }
    cout << ":\n";

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