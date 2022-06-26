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
    // starts FROM 2
    vector<ll> a(n + 1, 0);

    FE(i, 2, n) { cin >> a[i]; }
    string s;
    cin >> s;
    ll subTreeSizes[n + 1][2];
    // 0 = B
    // 1 = W
    FE(i, 1, n) {
        subTreeSizes[i][0] = s[i - 1] == 'B';
        subTreeSizes[i][1] = s[i - 1] == 'W';
    }
    FFE(i, n, 2) {
        subTreeSizes[a[i]][0] += subTreeSizes[i][0];
        subTreeSizes[a[i]][1] += subTreeSizes[i][1];
    }
    ll ans = 0;
    FE(i, 1, n) ans += (subTreeSizes[i][0] == subTreeSizes[i][1]);
    cout << ans << '\n';


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