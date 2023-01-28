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
    G(n) G(k) G(r) G(c);
    char g[n][n];
    memset(g, '.', sizeof g);
    r--;c--;
    // go through k * k squares across g
    r %= k;c %= k;
    char s[k][k];
    memset(s, '.', sizeof s);
    F(i, 0, k) {
        s[i][i] = 'X';
    }
    s[r][r] = '.';
    s[r][c] = 'X';
    s[c][c] = '.';
    s[c][r] = 'X';
    // like the convolve operator
    for (int kt = 0; kt <= n - k; kt += k) {
        for (int st = 0; st <= n - k; st += k) {
            for (int i = 0; i < k; i++) {
                for (int j = 0; j < k;j++) {
                    g[i + kt][j + st] = s[i][j];
                }
            }
        }
    }
    F(i, 0, n) {
        F(j, 0, n) {
            cout << g[i][j];
        }
        cout << '\n';
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