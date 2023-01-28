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
    G(n); string s; cin >> s;
    if (s[0] != '9') {
        for (char c : s) {
            cout << 9 - (c - '0');
        }
        cout << '\n';
    }
    else {
        string ans = "";
        int i = n - 1;
        while (i >= 0 && (s[i] - '0') <= 1) {
            ans.push_back(1 - (s[i] - '0') + '0');
            i--;
        }
        ans.push_back((11 - (s[i] - '0')) + '0');
        bool carry = 1;
        i--;
        for (;i >= 0;i--) {
            if ((s[i] - '0') <= 1) {
                if (carry) {
                    if (s[i] == '1') { ans.push_back('9'); }
                    else {
                        ans.push_back('0');
                        carry = 0;
                    }
                }
                else {
                    ans.push_back((1 - (s[i] - '0')) + '0');
                    carry = 0;
                }
            }
            else {
                if (carry) {
                    ans.push_back((10 - (s[i] - '0')) + '0');
                }
                else {
                    ans.push_back((11 - (s[i] - '0')) + '0');
                }
                carry = 1;
            }
        }
        reverse(all(ans));
        cout << ans << '\n';
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