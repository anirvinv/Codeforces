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

    if (s[0] == '>' || s.back() == '<') {
        cout << "0\n";
        return;
    }

    int r1 = 0;
    F(i, 0, n) {
        if (s[i] == '>') break;
        r1++;
    }

    int r2 = 0;
    FFE(i, n - 1, 0) {
        if (s[i] == '<') break;
        r2++;
    }
    cout << min(r1, r2) << '\n';

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