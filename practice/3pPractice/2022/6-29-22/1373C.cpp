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
    string s;
    cin >> s;
    vector<ll> pre(s.length());
    ll count = 0;
    F(i, 0, s.length()) {
        if (s[i] == '-') {
            count--;
        }
        else {
            count++;
        }
        pre[i] = count;
    }
    ll cur = 0, mn = 0, res = s.length();
    F(i, 0, s.length()) {
        char c = s[i];
        if (c == '+') {
            cur++;
        }
        else {
            cur--;
        }
        if (cur < mn) {
            mn = cur;
            res += i + 1;
        }
    }
    cout << res << '\n';
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