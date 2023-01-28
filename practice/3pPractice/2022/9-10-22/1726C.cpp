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
    string s; cin >> s;
    ll ans = 0;
    F(i, 0, 2 * n) {
        if (i == 0 || s[i - 1] == s[i] && s[i] == '(') {
            ans++;
        }
    }
    cout << ans << '\n';


    /*
    Solution:
        ()()() --> sequences like these are always 1. Basically, they are all on the same "layer". However, if you get one layer deeper,
        then you can increment ans. So (()) () (()) --> 2 connected components because the outer layer is linked and the inner ps are
        separated by the outer ones. So any time you go "one deeper" than you are right now, you increment. In other words, every time you see a "((".

        Proof:
            (()) has 2 connected components because the inner is not connected with outer. If you have ((((...)))), you will have n connected components
            for n nested parentheses. However, if you have adjacent brackets, ()(), then this is all one component. Finally, if you have a combination of both,
            (())(), then the parentheses on the same layer still all form a connected component and nested ones form another layer, but every pair of parenthesis inside
            another pair is separate from all outside pairs because it would break the rule if it was.
    */

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
}