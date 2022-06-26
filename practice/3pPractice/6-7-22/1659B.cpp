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
    G(n) G(k);
    string s;
    cin >> s;
    vector<ll> f(n);

    ll tmp = k;
    F(i, 0, n) {
        char c = s[i];
        if (tmp) {
            if (k % 2 == 0) {
                if (c == '0') {
                    f[i] = 1;
                    tmp--;
                }
            }
            else {
                if (c == '1') {
                    f[i] = 1;
                    tmp--;
                }
            }
        }
    }
    f[f.size() - 1] += tmp;
    F(i, 0, n) {
        if ((k - f[i]) % 2 == 0) {
            cout << s[i];
        }
        else {
            cout << ('1' - s[i]);
        }
    }cout << '\n';
    for (ll e : f) {
        cout << e << " ";
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