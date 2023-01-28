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
bool isP(string s) {
    F(i, 0, s.length() / 2) {
        if (s[i] != s[s.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    bool marked[n];
    memset(marked, 0, sizeof marked);
    ll ans = 0;
    if (s.length() >= 2) {
        if (s[0] == s[1]) {
            marked[1] = 1;
            ans++;
        }
    }
    F(i, 2, n) {
        if (isP(s.substr(i - 2, 3)) && !marked[i - 2]) {
            ans++;
            marked[i] = 1;
        }
        else if (isP(s.substr(i - 1, 2)) && !marked[i - 1]) {
            ans++;
            marked[i] = 1;
        }
    }
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